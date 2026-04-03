#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> umap;
    for(auto &n : arr){
        umap[n]++;
    }

    int none_flag = 1;
    int maxkey = 0;
    for(auto [key, val] : umap){
        if(val<=1){
            none_flag = 0;
            maxkey = max(maxkey, key);
        }
    }
    if(none_flag){
        cout<<-1<<endl;
    }
    else{
        cout<<maxkey<<endl;
    }
    // Please write your code here.


    return 0;
}
