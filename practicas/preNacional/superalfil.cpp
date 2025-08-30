#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin) //Uses file as an input
#define output freopen("out.txt", "w", stdout) //Creates a file or updates the output

int main(){
    input;
    output;
    int vertical;
    int horizontal;
    cin>>vertical>>horizontal;
    int tabla = vertical * horizontal;
    bool vis[1000][1000] = {false};
    int usados = 0;
    int posV = 0;
    int posH = 0;
    int sumV = 0;
    int sumH = 0;
    bool continua = true;
    while(continua){
        if(!vis[posV][posH]){
            vis[posV][posH] = true;
            usados += 1;
        }
        if(posV == vertical - 1){
            sumV = -1;
        } else if(posV == 0){
            sumV = 1;
        }
        if(posH == horizontal - 1){
            sumH = -1;
        } else if(posH == 0){
            sumH = 1;
        }
        posV += sumV;
        posH += sumH;
        if ((posV == 0 && posH == 0) || 
            (posV == 0 && posH == horizontal - 1) || 
            (posV == vertical - 1 && posH == 0) || 
            (posV == vertical - 1 && posH == horizontal - 1)){
            continua = false;
        }
    }
    vis[posV][posH] = true;
    usados += 1;
    cout<<tabla<<" "<<usados<<endl;
}