#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int oddsum = 0;  int evensum =0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            oddsum += arr[i];
        }
        else{
            evensum += arr[i];
        }
    }

    if(oddsum > evensum){
            cout<<oddsum - evensum<<endl;
        }
        else{
            cout<<evensum - oddsum<<endl;
        }
    return 0;
}