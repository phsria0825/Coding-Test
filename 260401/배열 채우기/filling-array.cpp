#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;

    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[arr.size()-1-i] == 0){
            continue;
        }
        cout<<arr[arr.size()-1-i]<<" ";
    }
    return 0;
}