#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;

        if(num == 0){
            break;
        }
        arr.push_back(num);
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[arr.size()-1-i]<<" ";
    }
    return 0;
}