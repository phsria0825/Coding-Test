#include <bits/stdc++.h>
using namespace std;

// 북(0), 동(1), 남(2), 서(3) - 시계 방향 순서
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0}; // 행렬(y축 아래가 +) 기준

int main() {

    string cmd_str;
    if (!(cin >> cmd_str)) return 0;

    // Please write your code here.
    int nx = 0, ny = 0;
    int dirnum = 0;
    for(auto &s : cmd_str){
        if(s == 'L'){
            dirnum  = (dirnum -1 + 4) % 4; 
        }
        else if(s == 'R'){
            dirnum  = (dirnum + 1) % 4; 
        }
        else if(s == 'F'){
            nx += dx[dirnum];
            ny += dy[dirnum];
        }
    }

    cout<<nx<<" "<<ny;
    return 0;
}