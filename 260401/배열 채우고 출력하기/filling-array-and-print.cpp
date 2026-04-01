#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<string> arr(10);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    for(int i=arr.size()-1; i>=0; i--){
        cout<<arr[i];
    }
    return 0;
}