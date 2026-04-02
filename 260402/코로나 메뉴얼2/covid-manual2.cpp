#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 3;
    vector<string> symptoms(n);
    vector<int> tmp(n);

    for(int i=0; i<n; i++){
        int t; string s;
        cin>>s>>t;

        symptoms[i] = s;
        tmp[i] = t;

    }

    unordered_map<int, int> umap;
    for(int i=0; i<n; i++){
        if(symptoms[i] =="Y" && tmp[i]>=37){
            umap[0]++;
        }
        else if(symptoms[i] =="N" && tmp[i]>=37){
            umap[1]++;
        }
        else if(symptoms[i] =="Y" && tmp[i]<37){
            umap[2]++;
        }
        else{
            umap[3]++;
        }
    }

    int em = false;
    for(int i=0; i<4; i++){
        cout<<umap[i]<<" ";
        if(umap[i]>=2){
            em = true;
        }
    }
    if(em) cout<<'E'<<endl;
    return 0;
}