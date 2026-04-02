#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    string s = "LEBROS";

    char ss;
    cin>>ss;

    auto idx = s.find(ss);
    if(idx == string::npos){
        cout<<"None"<<endl;
    }
    else{
        cout<<idx<<endl;
    }
    return 0;
}