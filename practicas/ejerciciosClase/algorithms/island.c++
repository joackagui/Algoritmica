#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin);
#define output freopen("out.txt", "w", stdout);

vector<string> grapho(1000);
bool vis[1000][1000];
//up, down, right, left
//upright, upleft, downright, downleft
int movementInX[] = {-1, 1, 0, 0, -1, -1, 1, 1}
int movementInY[] = {0, 0, 1, -1, 1, -1, 1, -1}

int dfs(int row, int column){
    vis[row][column] = true;
    for(int i = 0; i < 8; i++){
        int newRow = row+movementInX[i]; //Moves in axis X
        int newColumn = column+movementInY[i]; //Moves in axis Y
        if(newRow < 0 || newRow > 3 || newColumn > 4 
        || newColumn < 0 || grapho[newRow][newColumn] == '.'){
            return;
        }
        if(!vis[newRow][newColum]){ //We check the rows we visited
            dfs(newRow,newColumn);
        }
    }
}

int main(){
    input;
    output;
    int rows, columns; //We have to know the amount of nodes and edges
    cin>>rows>>columns;
    for (int i = 0; i < rows; i++){
        cin>>grapho[i];
    }
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(!vis[i][j] && grapho[i][j] == '1'){ //We want to go through every symbol, and we start over and over if theres a '1' and it wasn't visited
                dfs(i,j);
                islandCount++;
            }
        }
    }
}