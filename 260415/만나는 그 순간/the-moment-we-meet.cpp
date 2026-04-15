#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>> N>> M;

    vector<tuple<string, int>> A(N);
    for(int i=0; i<N; i++){
        string s; int n;
        cin>>s>>n;
        A[i] = {s,n};
    }

    vector<tuple<string, int>> B(M);
    for(int i=0; i<M; i++){
        string s; int n;
        cin>>s>>n;
        B[i] = {s,n};
    }

    // Please write your code here.
    vector<int> pos_A;
    int cur_pos_A = 0;
    for(auto &cmd : A){
        auto [dir, dist] = cmd;

        while(dist--){
            if(dir == "R") {
                cur_pos_A++;
            }
            else{
                cur_pos_A--;
            }
            pos_A.push_back(cur_pos_A);
        }
    }

    vector<int> pos_B;
    int cur_pos_B = 0;
    for(auto &cmd : B){
        auto [dir, dist] = cmd;

        while(dist--){
            if(dir == "R") {
                cur_pos_B++;
            }
            else{
                cur_pos_B--;
            }
            pos_B.push_back(cur_pos_B);
        }
    }

    int ans = -1;
    for(int i=0; i<pos_A.size(); i++){
        if(pos_A[i] == pos_B[i]){
            ans = i+1;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}