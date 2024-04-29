#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];
bool cycle = false;
list<int> path;
list<int>::iterator it;
bool inMotion[10000];
stack<int> myStack;
int level[10000];

void dfs(int node){
    myStack.pop();
    vis[node] = true;
    inMotion[node] = true;
    for(int i = 0; i < grapho[node].size(); i++){
        myStack.push(grapho[node][i]);
    }
    for(int i = 0; i < grapho[node].size(); i++){
        int nextNode = myStack.top();
        if(!vis[nextNode]){
            level[nextNode] = level[node] + 1;
            dfs(nextNode);
        } else {
            if(inMotion[nextNode]){
                cycle = 1;
                path.push_back(node);
                path.push_back(nextNode);
            }
            myStack.pop();
        }
        
    }
    inMotion[node] = false;
    
}

int main() {
    input;
    output;
    int nodes, edges;
    cin>>nodes>>edges; //We have to know the amount of nodes and edges
    for(int i = 0 ; i < edges; i++ ) {
        int initialNode, finalNode;
        cin>>initialNode>>finalNode;
        grapho[initialNode].push_back(finalNode); //We assign the finalNode to the row of the initialNode in the grapho 
    }
    int startingNode; //Origin node and goal node
    cin>>startingNode;

    level[startingNode] = 1;
    myStack.push(startingNode);
    dfs(startingNode);


    if(cycle == 0){
        cout<<"false"<<endl;
    } else {
        cout<<"true"<<endl;
        int finishNode = path.front();
        int lastNode = finishNode;
        for(int i = 1; i < level[finishNode]-level[path.back()]; i++){
            int preLevel = level[finishNode] - i;
            for(int j = 0; j < nodes; j++){
                for(int k = 0; k < grapho[j].size(); k++){
                    if(preLevel == level[j] && grapho[j][k] == lastNode){
                        lastNode = j;
                        path.push_back(lastNode);
                    }
                }
            }
        }
        for(it = path.begin(); it != path.end(); it++){
        cout << *it <<" "; 
        }
    }
    cout<<endl;
}

