#include <bits/stdc++.h>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.

    vector<vector<int>> mat(n, vector<int>(m));
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mat[i][j] = cnt;
            cnt++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            int zigzag;
            if(j%2 == 0){
                zigzag = j * n + i;
            }
            else{
                zigzag = j * n + (n - 1 - i);
            }

            cout<<mat[zigzag/m][zigzag%m]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
