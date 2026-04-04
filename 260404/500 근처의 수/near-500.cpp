#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int over_500 = 1000;
    int under_500 = 0;
    for(auto &num : nums){
        if(num > 500){
            over_500 = min(over_500, num);
        }
        else if(num < 500){
            under_500 = max(under_500, num);
        }
    }
    cout<<under_500<<" "<<over_500<<endl;
    return 0;
}