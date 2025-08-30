#include<bits/stdc++.h>
using namespace std;

int coins[4] =  {9, 6, 5, 1};
 
int minCoins(int n){
    if (n == 0) return 0;
    int res = INT_MAX;
    for (int i = 0; i < 4; i++){
        if (coins[i] <= n) {
            int sub_res = minCoins(n-coins[i]);
            if (sub_res != INT_MAX && sub_res + 1 < res){
                res = sub_res + 1;
            }
        }
    }
   return res;
}
 

int main(){
    int change = 11;
    cout << "Las monedas minimas son: "<< minCoins(change)<<endl;
}