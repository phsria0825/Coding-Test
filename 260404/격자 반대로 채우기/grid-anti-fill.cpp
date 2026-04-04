#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    vector<vector<int>> arr(N, vector<int>(N));
    int cnt = 1;

    for(int i=N-1; i>=0; i--){
        if((N-1-i)%2 == 0){
            for(int j=N-1; j>=0; j--){
                arr[j][i] = cnt;
                cnt++;
            }
        }
        else{
            for(int j=0; j<N; j++){
                arr[j][i] = cnt;
                cnt++;
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}