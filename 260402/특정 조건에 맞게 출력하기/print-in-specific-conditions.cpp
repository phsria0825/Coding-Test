#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> arr;
    while(true){
        int e;
        cin>>e;

        if(e == 0){
            break;
        }
        arr.push_back(e);
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0){
            cout<< arr[i] / 2 <<" ";
        }
        else{
            cout<< arr[i] + 3 <<" ";
        }
    }
    return 0;
}