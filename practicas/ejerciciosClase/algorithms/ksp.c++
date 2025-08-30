#include<bits/stdc++.h>

using namespace std;

#define input freopen("inks.txt", "r", stdin) //Uses file as an input
#define output freopen("out.txt", "w", stdout) //Creates aor updates the output

int w[4] = {1, 3, 3, 10};
int g[4] = {1000, 1500, 500, 3000};
int n = 4;
int dp[1000][1000];

int f(int pos, int weight){
    if(weight <= 0 || pos >= n){
        return 0;
    }
    if(dp[pos][weight] == -1){
        int res = f(pos+1, weight);
        if(weight - w[pos] >= 0){
            res = max(g[pos] + f(pos+1, weight -w[pos]), res);
        }
        dp[pos][weight] = res;
    }
    return dp[pos][weight];
}

int bu() {
    int dp2[1000][1000];
    //memset(dp2, 0, sizeof(dp2));
    for(int i = 0; i <= 15; i++) {
        dp2[0][i] = 0;
    }
    for(int i = 1; i <= n; i++) { // objetos 
        for(int j = 0; j <= 15; j++) { // peso de la mochila
            // cout<<i <<" "<< j<<endl;
            if( w[i-1] > j ) {
                dp2[i][j] = dp2[i-1][j];
            } else {
                dp2[i][j] = max(g[i-1]+ dp2[i-1][j-w[i-1]], dp2[i-1][j]);
            }
            
        } 
    }
    return dp2[n][15];
}

int main(){
    memset(dp, -1, sizeof(dp));
    cout<<f(0, 15)<<endl;
    cout<<bu()<<endl;

}