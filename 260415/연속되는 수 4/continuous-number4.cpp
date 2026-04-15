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
    int max_cnt = INT_MIN;
    int cnt = 0;

    for(int i=0; i<N; i++){
        if(arr[i] > arr[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }

        max_cnt = max(max_cnt, cnt);
    }
    cout<<max_cnt<<endl;
    return 0;
}