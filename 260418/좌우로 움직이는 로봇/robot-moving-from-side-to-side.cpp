#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;

    vector<tuple<int, string>> robotA(N);
    for(int i=0; i<N; i++){
        int m; string d;
        cin>>m>>d;
        robotA[i] = {m, d};
    }

    vector<tuple<int, string>> robotB(M);
    for(int i=0; i<M; i++){
        int m; string d;
        cin>>m>>d;
        robotB[i] = {m, d};
    }

    // Please write your code here.
    vector<int> arrA;
    int a = 0;
    for(auto [move, dir] : robotA){
        while(move--){
            if(dir=="R"){
                arrA.push_back(a++);
            }
            else{
                arrA.push_back(a--);
            }
        }
    }

    vector<int> arrB;
    int b = 0;
    for(auto [move, dir] : robotB){
        while(move--){
            if(dir=="R"){
                arrB.push_back(b++);
            }
            else{
                arrB.push_back(b--);
            }
        }
    }
    int cnt = 0;
    for(int i=1; i<arrA.size(); i++){
        if(i==1 || ((arrA[i] == arrB[i]) && (arrA[i-1] != arrB[i-1]))){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}