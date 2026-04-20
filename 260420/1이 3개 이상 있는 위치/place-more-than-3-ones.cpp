#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;

    vector<vector<int>> grid(N, vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>grid[i][j];
        }
    }

    // Please write your code here.

    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,1,0,-1};
    int total_cnt = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int cnt = 0;

            for(int k=0; k<size(dr); k++){
                int nr = i + dr[k];
                int nc = j + dc[k];

                if(nr<0 || nr>=N || nc<0 || nc>=N) continue;
                if(grid[nr][nc] == 1){
                    cnt++;
                }
            }
            if(cnt>=3){
                total_cnt++;
            }
        }
    }
    cout<<total_cnt;
    return 0;
}