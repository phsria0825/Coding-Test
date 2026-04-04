#include <bits/stdc++.h>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here
    int min_price = INT_MAX;
    int max_profit = 0;

    for(int i=0; i<n; i++){
        /*if(min_price>price[i]){
            min_price = price[i];
        }*/
        min_price = min(min_price, price[i]);

        int profit = price[i] - min_price;
        max_profit = max(max_profit, profit);
    }
    cout<<max_profit<<endl;
    return 0;
}
