#include <bits/stdc++.h>
using namespace std;

int bfs(int n, int m, vector<vector<int>>& a, vector<vector<int>>& visited) {
    queue<pair<int, int>> q;
    
    q.push({0, 0});
    visited[0][0] = 1;

    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};

    while (!q.empty()) {
        auto [y, x] = q.front();
        q.pop();

        if (y == n - 1 && x == m - 1) {
            return 1;
        }

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (visited[ny][nx] || a[ny][nx] == 0) continue;

            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }

    return 0;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> visited(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << bfs(n, m, a, visited) << endl;

    return 0;
}