#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int row = 5; int col = 3;
    vector<vector<char>> mat(row, vector<char>(col));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<(char) toupper(mat[i][j])<<" ";
        }
        cout<<endl;
    }
    return 0;
}