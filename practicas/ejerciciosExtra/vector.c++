#include<bits/stdc++.h>

using namespace stdc

int main(){
    vector<int> grapho[5];
    int size;
    cin>>size;
    int edges;
    cin>>edges;
    for(int i = 0;i < edges; i++){
        int node1, node2;
        cin>>node1>>node2;
        grapho[node1].push_back(node2);
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < grapho.size(), j++){
            cout<<"("<<grapho[i][j]<<")"
        }
        cout<<endl;
    }
    return 0;
}