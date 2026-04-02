#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> arr;
    for(int i=0; i<100; i++){
        int score;
        cin>>score;
        if(score == 0) break;
        arr.push_back(score);
    }

    unordered_map<int, int> umap;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < 10) continue;
        umap[10*(arr[i] / 10)]++;
    }

    for(int i=100; i>=10; i-=10){
        auto val = umap[i];
        cout<<i<<" - "<<val << endl;
    }
    return 0;
}