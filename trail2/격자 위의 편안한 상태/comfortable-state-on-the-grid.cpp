#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;

    vector<vector<int>> grid(M, vector<int>(2,0));
    for (int i = 0; i < M; i++) {
        cin >> grid[i][0] >> grid[i][1];
    }

    vector<vector<bool>> visited(N+1, vector<bool>(N+1, false));

    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,-1,0,1};

    for(auto pos : grid){
        int cnt = 0;

        int cur_r = pos[0];
        int cur_c = pos[1];

        for(int k=0; k<4; k++){
            int next_r = cur_r + dr[k];
            int next_c = cur_c + dc[k];

            if(next_r < 1 || next_r > N ||
               next_c < 1 || next_c > N) continue;
            else if (visited[next_r][next_c] == true){
                cnt++;
            }
        }

        if (cnt == 3) cout<<1<<endl;
        else cout<<0<<endl;

        visited[cur_r][cur_c] = true;
    }

    return 0;
}