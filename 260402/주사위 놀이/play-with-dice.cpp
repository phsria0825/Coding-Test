#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    unordered_map<int, int> umap;
    vector<int> arr(10);

    for(int i=0; i<arr.size(); i++){
        int a;
        cin>>a;

        umap[a]++;
    }

    for(int i=1; i<=6; i++){
        int val = umap[i];
        cout<<i<<" - "<<val<<endl;
    }

    return 0;
}