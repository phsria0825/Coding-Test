#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<vector<char>> mp(N, vector<char>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> mp[i][j];

    int K;
    cin >> K;

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};

    int side = (K - 1) / N;
    int off  = (K - 1) % N;

    int cur_r, cur_c, dir;
    if (side == 0)      { cur_r = 0;     cur_c = off;   dir = 2; }
    else if (side == 1) { cur_r = off;   cur_c = N - 1; dir = 3; }
    else if (side == 2) { cur_r = N - 1; cur_c = N - 1 - off; dir = 0; }
    else                { cur_r = N - 1 - off; cur_c = 0;     dir = 1; }

    int cnt = 0;
    while (cur_r >= 0 && cur_r < N && cur_c >= 0 && cur_c < N) {
        cnt++;
        if (mp[cur_r][cur_c] == '\\') {
            if (dir == 0 || dir == 2) dir = (dir + 3) % 4;
            else dir = (dir + 1) % 4;
        } else {
            if (dir == 0 || dir == 2) dir = (dir + 1) % 4;
            else dir = (dir + 3) % 4;
        }
        cur_r += dr[dir];
        cur_c += dc[dir];
    }

    cout << cnt << "\n";
    return 0;
}