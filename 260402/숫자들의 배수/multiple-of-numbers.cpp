#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int cnt = 1;
    int flag = 0;
    while(flag < 2){
        int num = cnt * n;

        if(num % 5 == 0){
            flag++;
        }

        cout<<num <<" ";
        cnt++;

    }
    return 0;
}