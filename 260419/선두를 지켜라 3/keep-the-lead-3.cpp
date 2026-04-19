#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;

    vector<tuple<int, int>> A(N);
    for(int i=0; i<N; i++){
        int v,t;
        cin>>v>>t;
        A[i] = {v,t};
    }

    vector<tuple<int, int>> B(M);
    for(int i=0; i<M; i++){
        int v,t;
        cin>>v>>t;
        B[i] = {v,t};
    }

    // Please write your code here.

    int dist_A = 0;
    vector<int> running_A;
    for(auto [vel, time] : A){
        while(time--){
            dist_A += vel;
            running_A.push_back(dist_A);
        }
    }

    int dist_B = 0;
    vector<int> running_B;
    for(auto [vel, time] : B){
        while(time--){
            dist_B += vel;
            running_B.push_back(dist_B);
        }
    }

    int cnt = 0;
    vector<int> honer(2); 
    for(int i=0; i<running_A.size(); i++){
        if(running_A[i] > running_B[i]){
            if(honer[0] == 1 && honer[1] == 0) continue;
            cnt++;
            honer[0] = 1;
            honer[1] = 0;
        }
        else if(running_A[i] < running_B[i]){
            if(honer[0] == 0 && honer[1] == 1) continue;
            cnt++;
            honer[0] = 0;
            honer[1] = 1;
        }
        else if(running_A[i] == running_B[i]){
            if(honer[0] == 1 && honer[1] == 1) continue;
            cnt++;
            honer[0] = 1;
            honer[1] = 1;
        }
    }

    cout<<cnt;
    return 0;
}