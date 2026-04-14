#include <bits/stdc++.h>
using namespace std;

int grid[208][208];

int main() {
    int N;
    cin>>N;

    vector<vector<int>> arr(N, vector<int>(4)); 
    for(int i=0; i<N; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    // Please write your code here.
    int offset = 100;
    for(int n=0; n<N; n++){
        int xStart = arr[n][0] + offset;
        int yStart = arr[n][1] + offset;
        int xEnd = arr[n][2] + offset;
        int yEnd = arr[n][3] + offset;

        for(int i=xStart; i<xEnd; i++){
            for(int j=yStart; j<yEnd; j++){
                if(n%2 != 0){
                    grid[i][j] = 1;
                }
                else{
                    grid[i][j] = -1;
                }
            }
        }
    }
    int cnt = 0;
    for(int i=0; i<size(grid); i++){
        for(int j=0; j<size(grid[0]); j++){
            if(grid[i][j] == 1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}