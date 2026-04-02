#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n1; int n2;
    cin>>n1>>n2;

    vector<int> arr1(n1);
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    int flag = 0;
    for(int i=0; i<=n1 - n2; i++){
        int match = 1;
        for(int k=0; k<n2; k++){
            if(arr1[i+k] != arr2[k]){
                match = 0;
                break;
            }
        }

        if(match){
            flag = 1;
        }
    }

    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}