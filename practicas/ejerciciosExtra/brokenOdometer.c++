#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n && n!>>-1){
        int speed, elapsed;
        int startTime = 0;
        int result = 0;
        for(int i = 0; i<n; i++){
            cin>>speed>>elapsed;
            int currentTime = elapsed - startTime;
            result +=speed * currentTime;
            startTime = elapsed;
        }
        cout <<result<<"miles"<<endl;
    }
    return 0;
}