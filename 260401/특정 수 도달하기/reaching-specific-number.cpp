#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> arr(10);

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int sum = 0; int cnt = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>250){
            break;
        }
        sum += arr[i];
        cnt++;
    }

    double avg = (double) sum/cnt;

    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<avg<<endl;

    return 0;
}