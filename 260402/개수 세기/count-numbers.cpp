#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n; int m;
    cin>>n>>m;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int cnt = count(arr.begin(), arr.end(), m);
    cout<<cnt<<endl;
    return 0;
}