#include<bits/stdc++.h>

using namespace std;

#define input freopen("incc.txt", "r", stdin) //Uses file as an input
#define output freopen("out.txt", "w", stdout) //Creates or updates the output

vector<int> coinsList;
int dp2[4][1000];

int cc(int n){
    for(int i = 1; i <= coinsList.size(); i++){
        dp2[i][0] = 1;
        for(int j = 1; j <= n; j++) { // 1 ==> 15
            dp2[i][j] = dp2[i-1][j];
            if(j - coinsList[i-1] >= 0) {
                dp2[i][j] += dp2[i][j - coinsList[i-1]];
            }
        }
    }
    return dp2[coinsList.size()][n];
}

int main(){
    input;
    output;
    int coins, change;
    cin>>coins>>change;

    for (int i = 0; i < coins; i++){
        int coin;
        cin>>coin;
        coinsList.push_back(coin);
    }

    cout<<cc(change)<<endl;
}



