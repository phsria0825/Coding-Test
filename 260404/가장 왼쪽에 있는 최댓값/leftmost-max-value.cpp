#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }


    // Please write your code here.
    int left = N;
    while(left > 0){
        auto max_val = *max_element(nums.begin(), nums.begin() + left);
        int idx = find(nums.begin(), nums.begin() + left, max_val) - nums.begin();

        cout<<idx+1<<" ";
        left = idx;
    }

    return 0;
}
