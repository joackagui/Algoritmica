#include<bits/stdc++.h>
using namespace stdc
int main() {
    int size;
    cin>>size; 
    int grapho[size][size];
    memset(grapho, 0, sizeof(grapho));
    int edges; 
    cin>>edges;
    for(int i = 0; i < edges; i++ ) {
        int node1, node2;
        cin>>node1>>node2;
        grapho[node1][node2] = 1;
    }
    for(int i = 0; i < size; i++) {
        for( int j = 0; j < size; j++) {
            cout<<"["<<grapho[i][j]<<"]"; 
        }
        cout<<endl;
    }
    return 0; 
}
