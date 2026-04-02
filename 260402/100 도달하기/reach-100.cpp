#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(n);

    while(true){
        int val = arr[arr.size()-1] + arr[arr.size()-2];
        arr.push_back(val);
        if(val > 100){
            break;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}