#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N = 10;
    string str = "";

    char c;
    for(int i=0; i<N; i++){
        cin>>c;
        str += c;
    }

    for(int i=N-1; i>=0; i--){
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}