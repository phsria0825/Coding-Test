#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<vector<int>> matrix(4, vector<int>(4));
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>matrix[i][j];
        }
    }


    for(int i=0; i<4; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += matrix[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}