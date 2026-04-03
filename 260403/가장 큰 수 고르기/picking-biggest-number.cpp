#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min_num = INT_MIN;
    for(auto &n : arr){
        min_num = max(min_num, n);
    }
    cout<<min_num<<endl;
    return 0;
}