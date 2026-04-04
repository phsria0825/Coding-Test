#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N; int M;
    cin>>N>>M;

    int cnt = 1;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}