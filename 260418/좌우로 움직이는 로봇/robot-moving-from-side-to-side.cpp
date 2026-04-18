#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;

    vector<tuple<int, string>> robotA(N);
    for(int i=0; i<N; i++){
        int m; string d;
        cin>>m>>d;
        robotA[i] = {m, d};
    }

    vector<tuple<int, string>> robotB(M);
    for(int i=0; i<M; i++){
        int m; string d;
        cin>>m>>d;
        robotB[i] = {m, d};
    }

    // Please write your code here.
    vector<int> arrA;
    int a = 0;
    for(auto [move, dir] : robotA){
        while(move--){
            if(dir=="R"){
                a++;
            }
            else{
                a--;
            }
            arrA.push_back(a);
        }
    }

    vector<int> arrB;
    int b = 0;
    for(auto [move, dir] : robotB){
        while(move--){
            if(dir=="R"){
                b++;
            }
            else{
                b--;
            }
            arrB.push_back(b);
        }
    }
    int max_t = max(arrA.size(), arrB.size());
    if(!arrA.empty()) arrA.resize(max_t, arrA.back());
    if(!arrB.empty()) arrB.resize(max_t, arrB.back());

    int cnt = 0; // 0으로 시작해야 맞습니다.
    for(int i=1; i < max_t; i++){ // max_t까지만 돌리면 됨
        if(arrA[i] == arrB[i] && arrA[i-1] != arrB[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}