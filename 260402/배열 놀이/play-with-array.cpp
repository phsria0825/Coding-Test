#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n; int q;
    cin>>n>>q;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<q; i++){
        int type;
        cin >> type;

        int first;
        cin>>first;

        if(type == 1){
            cout<<arr[first-1]<<endl;
        }

        else if(type == 2){

            int idx = find(arr.begin(), arr.end(),first) - arr.begin();
            if(idx == arr.size()){
                cout<<0<<endl;
            }
            else{
                cout<<idx+1<<endl;
            }
        }

        else if(type == 3){
            int second;
            cin>>second;

            for(int j=first-1; j<second; j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}