#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    auto it = min_element(arr.begin(), arr.end()) - arr.begin();
    int min_val = arr[it];

    int max_num = INT_MIN; 
    int find = 0;
    for(int i=0; i<n; i++){
        if(it < i && min_val < arr[i]){
            max_num = max(max_num, arr[i]);
            find = 1;
        }
    }
    if(find){
        cout<<max_num - min_val<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
    return 0;
}