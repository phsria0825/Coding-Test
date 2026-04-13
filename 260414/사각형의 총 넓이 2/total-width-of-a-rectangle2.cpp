#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int offset = 100;
    int col = 4;
    vector<vector<int>>arr(N, vector<int>(col));
    for(int i=0; i<N; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    // Please write your code here.
    
    map<tuple<int,int>, int> point;
    for(auto &vec : arr){
        for(int i=vec[0]+offset; i<vec[2]+offset; i++){
            for(int j=vec[1]+offset; j<vec[3]+offset; j++){
                point[{i,j}]++;
            }
        }
    }
    int cnt = 0;
    for(auto &p : point){
        auto [t, val] = p;
        auto [x,y] = t;
        if (val >= 1){
            cnt++;
        }
    }
    cout<< cnt<<" ";
    return 0;
}