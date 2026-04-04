#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N; int M;
    cin>>N>>M;

    vector<vector<int>> arr(N, vector<int>(M));
    int cnt = 1;
    int cross_line = N + M - 1;
    for(int i=0; i<cross_line; i++){
        for(int j=0; j<N; j++){
            int k = i - j;
            if(k>=0 && k<M){
                arr[j][k] = cnt;
                cnt++;
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}