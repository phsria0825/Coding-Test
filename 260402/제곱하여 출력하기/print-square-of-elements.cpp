#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    for(int i=0; i<arr.size(); i++){
        cout<<pow(arr[i], 2)<<" ";
    }
    return 0;
}