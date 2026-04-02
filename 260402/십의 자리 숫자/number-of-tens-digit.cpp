#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    unordered_map<int ,int> umap;
    vector<int> arr;
    for(int i=0; i<100; i++){
        int n;
        cin>>n;
        if(n == 0) break;
        arr.push_back(n);
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i]/10 == 0) continue;
        umap[arr[i]/10]++;
    }

    for(int i=1; i<10; i++){
        auto val = umap[i];
        cout<< i<<" - "<< val<<endl;
    }

    return 0;
}