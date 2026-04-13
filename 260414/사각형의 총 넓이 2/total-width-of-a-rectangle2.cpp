#include <bits/stdc++.h>
using namespace std;

/**
int main() {
    int N;
    cin>>N;
    int offset = 100;
    int col = 4;
    vector<vector<int>>arr(N, vector<int>(col));
    for(int i=0; i<N; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    // Please write your code here.
    
    map<tuple<int,int>, int> point;
    for(auto &vec : arr){
        for(int i=vec[0]+offset; i<vec[2]+offset; i++){
            for(int j=vec[1]+offset; j<vec[3]+offset; j++){
                point[{i,j}]++;
            }
        }
    }
    int cnt = 0;
    for(auto &p : point){
        auto [t, val] = p;
        auto [x,y] = t;
        if (val >= 1){
            cnt++;
        }
    }
    cout<< cnt<<" ";
    return 0;
}
**/

#include <iostream>
#include <vector>

using namespace std;

int grid[205][205]; 

int main() {
    int N;
    cin >> N;

    int offset = 100;

    for(int n = 0; n < N; n++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;


        x1 += offset; y1 += offset;
        x2 += offset; y2 += offset;


        for(int i = x1; i < x2; i++) {
            for(int j = y1; j < y2; j++) {
                grid[i][j] = 1;
            }
        }
    }

    int total_area = 0;
    for(int i = 0; i < 205; i++) {
        for(int j = 0; j < 205; j++) {
            if(grid[i][j] == 1) {
                total_area++;
            }
        }
    }

    cout << total_area << endl;

    return 0;
}