#include <bits/stdc++.h>
using namespace std;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    vector<tuple<char, int>> cmd(N);
    for(int i = 0; i < N; i++){
        char action;
        int len;
        cin >> action >> len;
        cmd[i] = {action, len};
    }
    
    unordered_map<char, tuple<int, int>> dir = {
        {'N', {-1, 0}}, {'S', {1, 0}}, {'W', {0, -1}}, {'E', {0, 1}}
    };

    int count = 0;
    tuple<int, int> pos = {0, 0};

    for(auto &move : cmd){
        auto [action, len] = move;
        auto [dr, dc] = dir[action];

        for(int k = 0; k < len; k++){
            
            auto [r, c] = pos;
            int nr = r + dr;
            int nc = c + dc;
            count++;

            if(nr == 0 && nc == 0) {
                cout << count << "\n";
                return 0;
            }

            pos = {nr, nc};
        }
    }

    cout << -1 << "\n";
    return 0;
}