#include<bits/stdc++.h>
#include<vector>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)


    bool vis[10000];
    vector<int> grapho[10000];
    int level[10000];

    void bfs (int nodoInicial) {
    queue<int> colita;
    colita.push(nodoInicial);
    level[nodoInicial] = 0;
    while(!colita.empty()){
        int nodoActual = colita.front(); 

        colita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true; 
            for(int i = 0; i < grapho[nodoActual].size(); i++ ){
                int amigo = grapho[nodoActual][i];
                level[amigo] = level[nodoActual] + 1;
                if(!vis[amigo]) { 
                    colita.push(amigo);
                } 
            }   
        }
    }
    return moves
}

//Still in progress
int main() {
    input;
    output;
    int start,finish; 
    cin>>start>>finish;
    cout<<"To get from "<<start<<" to "<<finish<<" takes "<<bfs(start)<<" knight moves.";
    }
