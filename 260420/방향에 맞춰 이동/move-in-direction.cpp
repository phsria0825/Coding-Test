#include <bits/stdc++.h>

using namespace std;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main() {
    
    int N;
    cin>>N;

    vector<string> direction(N);
    vector<int> movements(N);

    for(int i=0; i<N; i++){
        cin>>direction[i]>>movements[i];
    }

    // Please write your code here.
    int x = 0, y = 0;
    for(int i=0; i<N; i++){
        if(direction[i] == "N"){
            x += movements[i] * dx[2];
        }
        else if(direction[i] == "S"){
            x += movements[i] * dx[0];
        }
        else if(direction[i] == "E"){
            y += movements[i] * dy[3];
        }
        else if(direction[i] == "W"){
            y += movements[i] * dy[1];
        }
    }

    cout<<y<<" "<<x<<endl;
    return 0;
}