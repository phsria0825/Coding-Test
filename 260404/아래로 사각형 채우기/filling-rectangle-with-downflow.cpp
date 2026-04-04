#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));
    int cnt = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = cnt;
            cnt++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}