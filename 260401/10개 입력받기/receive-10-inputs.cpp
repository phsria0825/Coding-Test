#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10;

    vector<int> arr;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;

        if(element==0){
            break;
        }
        arr.push_back(element);
    }

    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    double avg = sum/arr.size();

    cout<<fixed;
    cout.precision(1);
    cout<<(int) sum<<" " <<avg;
    
    return 0;
}