#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    unordered_map<int, int> umap;
    for(auto &num : arr){
        umap[num]++;
    }
    for(int i=1; i<10; i++){
        cout<<umap[i]<<endl;
    }
    return 0;
}