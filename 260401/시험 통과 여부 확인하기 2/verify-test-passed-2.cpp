#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(4));
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
        cin>>mat[i][j];
        }
    }

    int cnt = 0;
    for(auto &vec : mat){
        double sum = accumulate(vec.begin(), vec.end(), 0.0); 
        double avg = sum/vec.size();

        if(avg>=60){
            cout<<"pass"<<endl;
            cnt++;
        }
        else{
            cout<<"fail"<<endl;
        }
    }
    cout<<cnt<<endl;

    return 0;
}