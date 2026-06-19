#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N = 10;
    vector<int> nums(N);

    for(int i=0; i<N; i++){
        cin >> nums[i];
    }


    double sum = 0; int cnt = 0;
    for(auto & num : nums){
        if(num > 250){
            break;
        }
        cnt++;
        sum += num;
    }
    cout<<sum;
    double avg = sum/cnt;
    cout << fixed << setprecision(1);
    cout<<" "<< avg<< endl;
    return 0;
}