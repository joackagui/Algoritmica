#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];
int level[10000];

void bfs (int nodoInicial) {
    queue<int> colita;
    int tiempo = 0;
    colita.push(nodoInicial);
    level[nodoInicial] = 0;
    while(!colita.empty()){ // La pilita no esta vacia ????
        int nodoActual = colita.front(); // obtener el primer elemento de la pila
        colita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true;
            for(int i = 0; i < grapho[nodoActual].size(); i++ ){
                int amigo = grapho[nodoActual][i]; // vecino o amigo
                level[amigo] = level[nodoActual] + 1;
                
                if(!vis[amigo]) {
                    colita.push(amigo);
                }
                
            }   
        }
    }
    
}


int main() {
    input;
    output;
    int nodes, edges;
    cin>>nodes>>edges; 
    int juan, luis;
    cin>>juan>>luis;
    for(int i = 0 ; i < edges; i++ ) {
        int initialNode, finalNode;
        cin>>initialNode>>finalNode;
        grapho[initialNode].push_back(finalNode);
    }
    bfs(juan);
    cout<<level[luis]<<endl;
}