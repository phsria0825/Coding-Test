#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M, 0));

    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};

    int r = 0, c = 0;
    int dir = 2;

    for (int num = 1; num <= N * M; num++) {
        grid[r][c] = num;

        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if (nr < 0 || nr >= N || nc < 0 || nc >= M || grid[nr][nc] != 0) {
            dir = (dir + 3) % 4;
            nr = r + dr[dir];
            nc = c + dc[dir];
        }

        r = nr;
        c = nc;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}