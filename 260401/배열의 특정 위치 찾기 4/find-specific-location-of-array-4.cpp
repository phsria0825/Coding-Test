#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;

    vector<int> arr;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;

        if(element == 0){
            break;
        }
        arr.push_back(element);
    }


    int cnt = 0; int sum = 0;
    for(int i=0; i<arr.size(); i++){

        if(arr[i]%2 == 0){
            cnt++;
            sum += arr[i];
        }
    }
    cout<<cnt<<" "<< sum;
    return 0;
}