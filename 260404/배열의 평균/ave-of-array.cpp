#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int row = 2; int col = 4;
    vector<vector<int>> mat(row, vector<int>(col));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }

    cout<<fixed;
    cout.precision(1);

    for(int i=0; i<row; i++){
        double sum = 0;
        for(int j=0; j<col; j++){
            sum += mat[i][j];
        }
        cout<<(double) sum/col<<" ";
    }
    cout<<endl;

    for(int i=0; i<col; i++){
        double sum = 0;
        for(int j=0; j<row; j++){
            sum += mat[j][i];
        }
        cout<<(double) sum/row<<" ";
    }
    cout<<endl;

    double sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += mat[i][j];
        }
    }
    cout<<(double) sum/(col*row)<<" ";


    return 0;
}