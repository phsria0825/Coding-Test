#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,T;
    cin>>N>>T;

    int r,c;
    char dir;
    cin>>r>>c>>dir;

    vector<vector<int>> grid(N, vector<int>(N));

    // Please write your code here.
    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,1,0,-1};

    int dirnum = 0;

    if(dir == 'U') dirnum = 0;
    else if(dir == 'R') dirnum = 1;
    else if(dir == 'D') dirnum = 2;
    else if(dir == 'L') dirnum = 3;

    int curr_r = r - 1; 
    int curr_c = c - 1;

    while(T--){
        
        int nr = curr_r + dr[dirnum];
        int nc = curr_c + dc[dirnum];

        if(nr < 0 || nr >= N || nc < 0 || nc >= N) {
            dirnum = (dirnum + 2) % 4; 
        }
        else {
            curr_r = nr;
            curr_c = nc;
        }
    }

    cout<<curr_r+1<<" "<<curr_c+1;

    return 0;
}