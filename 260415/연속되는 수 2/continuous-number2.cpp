#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;

    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    // Please write your code here.
    int max_cnt = 0, cur_cnt = 0;
    for(int i = 0; i < N; i++) {

        if(arr[i] == arr[i-1]){
            cur_cnt++;
        }
        else{ 
            cur_cnt = 1;
        }

        max_cnt = max(max_cnt, cur_cnt);
    }
    cout << max_cnt << endl;
    return 0;
}