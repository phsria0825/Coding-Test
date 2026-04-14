#include <bits/stdc++.h>
using namespace std;

int grid[2001][2001];

int main() {
    
    vector<vector<int>> arr(3, vector<int>(4));
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    // Please write your code here.
    int offset = 1000;
    for(int n=0; n<3; n++){

        int x1 = arr[n][0] + offset;
        int y1 = arr[n][1] + offset;
        int x2 = arr[n][2] + offset;
        int y2 = arr[n][3] + offset;

        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                if(n == 2){
                    grid[i][j] = 0;
                }
                else{
                    grid[i][j] = 1;
                }
            }
        }
    }

    int total_area = 0;
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            if(grid[i][j] == 1) total_area++;
        }
    }
    cout<<total_area<<endl;
    return 0;
}