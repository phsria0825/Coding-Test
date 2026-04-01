#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> arr;
    for(int i=0; i<100; i++){
        int element;
        cin>>element;
        if(element == 0) break;
        arr.push_back(element);
    }

    cout<<arr[arr.size()-1] + arr[arr.size()-2] + arr[arr.size()-3] << endl;
    return 0;
}