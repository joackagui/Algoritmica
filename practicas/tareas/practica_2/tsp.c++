#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];
int level[10000];
stack<int> path;

void bfs (int initialNode) {
    queue<int> myQueue; //We create our queue
    myQueue.push(initialNode);
    level[initialNode] = 0;
    while(!myQueue.empty()){ //Queue must contain something to keep running
        int currentNode = myQueue.front(); //Get the first element of the queue
        myQueue.pop();
        if(!vis[currentNode]) {
            vis[currentNode] = true; //CurrentNode gets 'visited'
            for(int i = 0; i < grapho[currentNode].size(); i++){
                int nextNode = grapho[currentNode][i]; //Gets the node of certain row and assings a level
                if(level[nextNode] == 0 && !vis[nextNode]){
                  level[nextNode] = level[currentNode] + 1;
                    if(!vis[nextNode]) { //Asks if it was visited, to make sure every connected node gets visited
                        myQueue.push(nextNode);
                    } 
                }
                
            }   
        }
    }
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
        grapho[finalNode].push_back(initialNode); 
    }
    int startingNode,finishNode; //Origin node and goal node
    cin>>startingNode>>finishNode;
    bfs(startingNode);
    path.push(finishNode);
    int lastNode = finishNode;
    for(int i = 1; i <= level[finishNode]; i++){
        int preLevel = level[finishNode] - i;
        for(int j = 0; j < nodes; j++){
            for(int k = 0; k < grapho[j].size(); k++){
                if(preLevel == level[j] && grapho[j][k] == lastNode){
                    lastNode = j;
                    path.push(lastNode);
                }
            }
        }
    }
    cout<<"Shortest lenght :"<<level[finishNode]<<endl;
    cout<<"Shortest path: "<<path.top();
    path.pop();
    for(int i = 0; i < path.size()+i; i++){
        cout<<" -> "<<path.top();
        path.pop();
    }
    cout<<endl;
}