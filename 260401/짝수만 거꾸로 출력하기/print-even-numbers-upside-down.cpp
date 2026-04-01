#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[arr.size()-1-i]%2 == 0){
            cout<<arr[arr.size()-1-i]<<" ";
        }
    }
    return 0;
}