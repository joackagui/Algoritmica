#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];
stack<int> myStack;
int level[10000];

void dfs(int node){
    myStack.pop();
    vis[node] = true;
    for(int i = 0; i < grapho[node].size(); i++){
        myStack.push(grapho[node][i]);
    }
    for(int i = 0; i < grapho[node].size(); i++){
        int nextNode = myStack.top();
        if(!vis[nextNode]){
            level[nextNode] = level[node] + 1;
            dfs(nextNode);
        } else {
            myStack.pop();
        }
    }
}

int main(){
    input;
    output;
    int nodes, edges;
    cin>>nodes>>edges;
    int max;
    for(int i = 0 ; i < edges; i++ ) {
        int initialNode, finalNode;
        cin>>initialNode>>finalNode;
        grapho[initialNode].push_back(finalNode);
    }

    int startingNode; //Origin node and goal node
    cin>>startingNode;

    level[startingNode] = 1;
    myStack.push(startingNode);
    dfs(startingNode);
    
    for(int i = 0 ; i < nodes; i++ ) {
        if(level[i] > max){
            max = level[i];
        }
    }

    for(int i = 0; i <= max; i++){
        if(i == 0){
            cout<<"Not connected nodes: ";
        } else {
            cout<<"Level "<<i<<":";
        }
        for(int j = 0; j < nodes; j++){
            if(level[j] == i){
                cout<<" "<<j;
            }
        }
        cout<<endl;
    }
}