#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N = 10;
    vector<int> nums(N);

    for(int i=0; i<N; i++){
        cin>>nums[i];
    }

    int sum = 0;
    for(int i=0; i<N; i++){
        sum += nums[i];
    }

    cout<<sum<<endl;;
    return 0;
}