#include <bits/stdc++.h>

using namespace std;

int N;
int x[100], y[100];
int grid[201][201];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int offset = 8;
    for(int n=0; n<N; n++){
        int xEnd = x[n]+offset, yEnd = y[n]+offset;
        
        for(int i=x[n]; i<xEnd; i++){
            for(int j=y[n]; j<yEnd; j++){
                if(grid[i][j] > 2) continue;
                grid[i][j]++;
            }
        }
    }
    int total_area = 0;
    for(int i=0; i<size(grid); i++){
        for(int j=0; j<size(grid[0]); j++){
            if(grid[i][j] >= 1){
                total_area++;
            }
        }
    }
    cout<<total_area<<endl;

    return 0;
}