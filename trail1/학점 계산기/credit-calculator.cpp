#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >>N;

    vector<double> grade(N);
    for(int i=0; i<N; i++){
        cin>>grade[i];
    }
    
    double sum = 0;
    for(int i=0; i<N; i++){
        sum += grade[i];
    }

    cout<<fixed<<setprecision(1);
    double avg = sum / grade.size();
    cout<< avg << endl;

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