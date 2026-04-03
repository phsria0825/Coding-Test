#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int nums[N];
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    int idx = N;
    vector<int> arr;
    while(idx > 0){
        int max_idx = 0;
        for(int i=0; i<idx; i++){
            if(nums[max_idx] < nums[i]){
                max_idx = i;
            }
        }
        arr.push_back(max_idx+1);
        idx = max_idx;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
