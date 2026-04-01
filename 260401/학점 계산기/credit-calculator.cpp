#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n; 
    cin>>n;

    vector<double> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>> arr[i];
    }

    double sum = accumulate(arr.begin(), arr.end(),0.0);
    double avg = (double) sum/arr.size();

    cout<<fixed;
    cout.precision(1);
    cout<<avg<< endl;
    if(avg >= 4.0){
        cout<<"Perfect"<< endl;
    }
    else if(avg >= 3.0){
        cout<<"Good"<< endl;
    }
    else{
        cout<<"Poor"<< endl;
    }

    return 0;
}