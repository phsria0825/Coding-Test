#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int enven_sum = 0;
    double third_avg = 0; double third_sum = 0; int cnt = 0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0){
            enven_sum+= arr[i];
        }

        if(arr[i] % 3 == 0){
            third_sum += arr[i];
            cnt++;
        }
    }
    third_avg = third_sum / cnt;

    cout<<fixed;
    cout.precision(1);
    cout<<enven_sum<<" "<<third_avg<<endl;
    return 0;
}