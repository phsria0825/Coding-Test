#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.rbegin(), arr.rend());
    cout<<arr[0]<<" "<<arr[1]<<endl;
    return 0;
}