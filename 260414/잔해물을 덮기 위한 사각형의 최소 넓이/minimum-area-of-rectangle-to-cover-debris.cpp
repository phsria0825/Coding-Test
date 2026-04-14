#include <bits/stdc++.h>

using namespace std;

int grid[2008][2008];
int main() {
    vector<int> rec1(4);
    for(int i=0; i<4; i++){
        cin>>rec1[i];
    }

    vector<int> rec2(4);
    for(int i=0; i<4; i++){
        cin>>rec2[i];
    }

    // Please write your code here.
    int offset = 1000;
    for(int i=rec1[0] + offset; i<rec1[2] + offset; i++){
        for(int j=rec1[1] + offset; j<rec1[3] + offset; j++){
            grid[i][j] = 1;
        }
    }

    for(int i=rec2[0] + offset; i<rec2[2] + offset; i++){
        for(int j=rec2[1] + offset; j<rec2[3] + offset; j++){
            grid[i][j] = 0;
        }
    }

    // 최소 직사각형 탐색하는 시뮬레이션
    int lx = size(grid), ly = size(grid); // 최소값 찾기용
    int ux = -1, uy = -1;                 // 최대값 찾기용
    bool found = false;

    for(int i=0; i<size(grid); i++){
        for(int j=0; j<size(grid[0]); j++){
            if(grid[i][j] == 1){
                found = true;
                lx = min(lx, i);
                ly = min(ly, j);
                ux = max(ux, i);
                uy = max(uy, j);
            }
        }
    }

    if(!found) {
        cout << 0 << endl;
    } else {
        cout << (ux - lx + 1) * (uy - ly + 1) << endl;
    }

    return 0;
}