#include<bits/stdc++.h>

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

vector<int> dis;
vector<vector<int>> nodes;

int dijkstra(int startNode){
    dis[startNode] = 0;
    priority_queue< vector<vector<int>> > pq;
    pq.push(make_pair(nodes[startNode], dis[startNode]));
    while(!pq.empty()){
        for(int i = 0; i < nodes.size(); i++){
           for(int j = 0; j < nodes[i].size(); j++){
                nodes[i]
            }
        }
    }
    
}

int main(){
    input;
    output;
    
    int nodesAmount, edges;
    cin >> nodesAmount >> edges;
    for (int i = 0; i < edges; i++) {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        nodes[node1].push_back(make_pair(node2, weight));
    }
    int start;
    cin>>start;

    dijkstra(start);
    for (int i = 0; i < nodesAmount; i++) {
        cout << "Nodo " << i << ": " << dist[i] << endl;
    }
}