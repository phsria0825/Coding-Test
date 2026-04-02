#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int num;
    cin>>num;

    vector<int> arr(num);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0){
            cout<< arr[i] <<" ";
        }
    }
    return 0;
}