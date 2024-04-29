#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grapho[10000];

stack<int> order;

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
    cin>>nodes>>edges;

    vector<int> amount(nodes); 

    for(int i = 0 ; i < edges; i++ ) {
        int initialNode, finalNode;
        cin>>initialNode>>finalNode;
        grapho[initialNode].push_back(finalNode); //We assign the finalNode to the row of the initialNode in the grapho 
    }
    
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < grapho[i].size(); j++){
            amount[grapho[i][j]] += 1;
        }
    }
    
    int max = 0;
    for(int i = 0; i < nodes; i++){
        if(amount[i] > max){
            max = amount[i];
        }
    }

    for(int i = 0; i <= max; i++){
        for(int j = 0; j < nodes; j++){
            if((i) == amount[j]){
            order.push(j);
            }
        }
    }
    cout<<order.top();
    order.pop();
    for(int i = 0; i < nodes-1; i++){
        cout<<" "<<order.top();
        order.pop();
    }
    cout<<endl;
}