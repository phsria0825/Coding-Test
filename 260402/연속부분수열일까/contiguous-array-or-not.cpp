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
    int start_idx = find(arr1.begin(), arr1.end(), arr2[0]) - arr1.begin();
    for(int i=0; i<arr2.size(); i++){
        if(arr1[i+start_idx] != arr2[i]){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

    return 0;
}