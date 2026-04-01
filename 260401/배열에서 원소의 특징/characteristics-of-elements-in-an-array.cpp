#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]%3 == 0){
            cout<<arr[i-1]<<endl;
            break;
        }
    }
    return 0;
}