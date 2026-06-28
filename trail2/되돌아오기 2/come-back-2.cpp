#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    string str;
    cin >> str;

    tuple<int, int> pos = {0,0};
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};

    int dir = 0; int count = 0;
    for(auto ch : str){
        auto [r,c] = pos;

        if(ch == 'R'){
            dir = (dir+1) % 4;
        }
        else if(ch == 'L'){
            dir = (dir+3) % 4;
        }
        else{
            r += dr[dir];
            c += dc[dir];
            pos = {r, c};

        }
        count++;
        
        if(r == 0 && c == 0) {
            cout<<count<<endl;
            return 0;
        }
        
    }

    cout<<-1<<endl;
    
    return 0;
}