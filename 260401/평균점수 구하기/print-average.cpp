#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<double> arr(8);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }


    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    double avg = sum/arr.size();

    cout<<fixed;
    cout.precision(1);
    cout<< avg << endl;

    return 0;
}