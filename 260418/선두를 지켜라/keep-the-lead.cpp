#include <bits/stdc++.h>

using namespace std;


int main() {
    int N,M;
    cin>>N>>M;

    vector<tuple<int,int>> A(N);
    for(int i=0; i<N; i++){
        int v,t;
        cin>>v>>t;
        A[i] = {v,t};
    }

    vector<tuple<int,int>> B(M);
    for(int i=0; i<M; i++){
        int v,t;
        cin>>v>>t;
        B[i] = {v,t};
    }

    // Please write your code here.
    vector<int> dist_of_A;
    int dist_a = 0;
    for(auto &a : A){
        auto [vel, time] = a;
        while(time--){
            dist_a += vel;
            dist_of_A.push_back(dist_a);
        }
    }

    vector<int> dist_of_B;
    int dist_b = 0;
    for(auto &b : B){
        auto [vel, time] = b;
        while(time--){
            dist_b += vel;
            dist_of_B.push_back(dist_b);
        }
    }

    string s = "C";
    int cnt = 0;

    for(int t=0; t<dist_of_A.size(); t++){
        if(dist_of_A[t] > dist_of_B[t]){
            if(s == "B"){
                cnt++;
            }
            s = "A";
        }
        else if(dist_of_A[t] < dist_of_B[t]){
            if(s == "A"){
                cnt++;
            }
            s = "B";
        }
    }

    cout<<cnt<<endl;
    return 0;
}