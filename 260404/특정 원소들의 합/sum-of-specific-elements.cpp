#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N = 4;
    vector<vector<int>> grid(N, vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>grid[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            sum += grid[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}