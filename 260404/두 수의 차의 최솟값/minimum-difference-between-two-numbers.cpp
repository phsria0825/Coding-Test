#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int min_diff = INT_MAX;
    for(int i=0; i<n-1; i++){
        int diff = nums[i+1] - nums[i];
        min_diff = min(min_diff, diff);
    }
    cout<<min_diff<<endl;
    
    return 0;
}