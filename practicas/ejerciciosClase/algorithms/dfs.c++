#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];

void dfs (int firstNode) {
    stack<int> myStack;
    myStack.push(firstNode); //We create our stack
    while(!myStack.empty()){ //Queue must contain something to keep running
        int currentNode = myStack.top(); //Get the first element of the queue
        myStack.pop();
        if(!vis[currentNode]) {
            vis[currentNode] = true; //CurrentNode gets 'visited'
            for(int i = 0; i < grapho[currentNode].size(); i++ ){
                int nextNode = grapho[currentNode][i];
                if(!vis[nextNode]){ //Asks if it was visited, to make sure every connected node gets visited
                    myStack.push(nextNode);
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
    int groupCount = 0; //We use this if we are trying to get amount of groups of nodes that aren't connected
    for(int i = 0; i < nodes; i++){
        if(!vis[i]){
            groupCount++;
            dfs(i);
        }
    }
    int startingNode,finishNode; //Origin node and goal node
    cin>>startingNode>>finishNode;
    dfs(startingNode);
    if(vis[finishNode]){ //We see if startingNode can go to finishNode
        cout<<"There's a path to knowing it"<<endl;
    } else {
        cout<<"There's no such path to get to it"<<endl;
    }
}