#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M));

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    
    int dir = 1;
    int r = 0, c = 0;

    grid[r][c] = 1;

    for(int i = 2; i <= N * M; i++) {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(nr < 0 || nr >= N || nc < 0 || nc >= M || grid[nr][nc] != 0) {
            dir = (dir + 1) % 4;
        }

        r = r + dr[dir];
        c = c + dc[dir];
        grid[r][c] = i;
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}