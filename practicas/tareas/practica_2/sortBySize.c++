#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];
int level[10000];

void bfs (int initialNode) {
    queue<int> myQueue; //We create a queue
    myQueue.push(initialNode);
    level[initialNode] = 0;
    while(!myQueue.empty()){ //Queue must contain something to keep running
        int currentNode = myQueue.front(); // Get the first element of the queue
        myQueue.pop();
        if(!vis[currentNode]) {
            vis[currentNode] = true; //CurrentNode gets 'visited'
            for(int i = 0; i < grapho[currentNode].size(); i++){
                int nextNode = grapho[currentNode][i]; //Gets the node of certain row and assings a level
                if(level[nextNode] == 0){
                  level[nextNode] = level[currentNode] + 1;
                    if(!vis[nextNode]) { //Asks if it was visited
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
        grapho[initialNode].push_back(finalNode); //We assign the finalNode to the row of the initialNode in the vector 
    }
    int start,finish; //Origin node and goal node
    cin>>start>>finish;
    bfs(start);
    int max = 0; // Max level
    for(int i = 0; i < nodes; i++){ //Finding the highest level
        if(level[i] > max){
            max = level[i];
        }
    }
    for(int i = 0; i <= max; i++){
        cout<<"Level "<<(max-i)<<": "; //We separate it by levels
        for(int j = 0;j < nodes; j++){
            if((max-i) == level[j]){
                cout<<j<<" ";
            }         
        }
        cout<<endl;
    }
}