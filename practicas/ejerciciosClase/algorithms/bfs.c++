#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];
int level[10000];

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
                    level[nextNode] = level[currentNode] + 1; //Asks if it was visited, to make sure every connected node gets visited and the level stays at its minimum
                    myQueue.push(nextNode);
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
        //grapho[finalNode].push_back(initialNode); //We could add this code line if we talking a bout a non-directed grapho    
    }
    int startingNode,finishNode; //Origin node and goal node
    cin>>startingNode>>finishNode;
    bfs(startingNode);
    if(vis[finishNode]){ //We see if startingNode can go to finishNode
        cout<<"There's a path to knowing it"<<endl;
    } else {
        cout<<"There's no such path to get to it"<<endl;
    }
}