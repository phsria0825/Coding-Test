#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 3;
    vector<vector<int>> mat1(n, vector<int>(n));
    vector<vector<int>> mat2(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat1[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat2[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat1[i][j] * mat2[i][j]<<" "; 
        }
        cout<<endl;
    }
    
    return 0;
}