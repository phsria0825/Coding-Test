#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,K;
    cin>>N>>M>>K;

    vector<int> arr(M);
    for(int i=0; i<M; i++){
        cin>>arr[i];
    }

    // Please write your code here.

    vector<int> cnt(N);
    int ans = -1;
    for(auto &m : arr){
        cnt[m]++;
        if(cnt[m] >= K){
            ans = m;
            break;
        }
    }
    cout<<ans<<endl;

}