#include <bits/stdc++.h>

using namespace std;
int N, K, P, T;  // (개발자수, 전염수, 초기값, 악수 배열)

void conta(tuple<int,int,int> &info, vector<int> &cnt, vector<int> &developer){
    auto [time, start, end] = info;

    if(developer[start-1] == 1 && developer[end-1] == 1){
        if(cnt[start-1] < K){
        cnt[start-1]++;
        }
        
        if(cnt[end-1] < K){
            cnt[end-1]++;
        }
    }
    else if(developer[start-1] == 1 && cnt[start-1] < K){
        developer[end-1] = 1;
        cnt[start-1]++;
    }
    else if(developer[end-1] == 1 && cnt[end-1] < K){
        developer[start-1] = 1;
        cnt[end-1]++;
    }
}

int main() {

    cin>>N>> K>> P>> T;

    vector<tuple<int,int,int>> arr(T);
    for(int i=0; i<T; i++){
        int t,x,y;
        cin>>t>>x>>y;
        arr[i] = {t,x,y};
    }

    // Please write your code here.
    vector<int> cnt(N);
    vector<int> developer(N);
    developer[P-1] = 1; // 초기 감염자

    sort(arr.begin(), arr.begin()+T, [](const auto &a, const auto &b){
        auto [ta, sa,ea] = a;
        auto [tb, sb,eb] = b;
        return ta<tb;
    });

    for(auto &vec : arr){
        conta(vec, cnt, developer);
    }

    for(int i=0; i<N; i++){
        cout<<developer[i];
    }

    return 0;
}