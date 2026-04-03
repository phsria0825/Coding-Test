#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> arr;
    while(true){
        int ele;
        cin>>ele;

        if(ele == 999 || ele == -999){
            break;
        }
        arr.push_back(ele);
    }

    int min_num = arr[0]; int max_num = arr[0];
    for(auto &num : arr){
        min_num = min(min_num, num);
        max_num = max(max_num, num);
    }

    cout<<max_num<<" "<<min_num<<endl;
    return 0;
}