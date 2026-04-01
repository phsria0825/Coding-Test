#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> arr;
    for(int i=0; i<10; i++){
        int element;
        cin>> element;
        arr.push_back(element);
    }

    int sum = arr[2] + arr[4] + arr[9];
    cout<<sum<<endl;
    return 0;
}