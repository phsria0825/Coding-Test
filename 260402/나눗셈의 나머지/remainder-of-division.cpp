#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int a; int b;
    cin >> a>> b;

    unordered_map<int, int> umap;
    while(a>=1){
        a = a/b;
        umap[a%b]++;
    }

    int total = 0;
    for(auto &u : umap){
        auto[key, val] = u;
        total += pow(val,2);
    }

    cout<<total<<endl;
    return 0;
}