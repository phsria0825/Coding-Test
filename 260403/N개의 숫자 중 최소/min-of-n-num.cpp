#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int val = arr[0];
    int cnt = 0;
    for(auto &num : arr){
        val = min(val, num);
    }
    for(auto &num : arr){
        if(num == val){
            cnt++;
        }
    }
    cout<<val<<" "<< cnt <<endl;
    return 0;
}