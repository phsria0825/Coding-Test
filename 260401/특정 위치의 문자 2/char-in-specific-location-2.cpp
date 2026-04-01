#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<8; i+=3){
        cout<<arr[i]<<" ";
    }
    return 0;
}