#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N; int M;
    cin>>N>>M;
    vector<vector<int>> mat1(N, vector<int>(M));
    vector<vector<int>> mat2(N, vector<int>(M));
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>mat2[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(mat1[i][j] == mat2[i][j]){
                cout<<0;
            }
            else{
                cout<<1;
            }
            cout<<" ";
        }
        cout<< endl;
    }

    return 0;
}