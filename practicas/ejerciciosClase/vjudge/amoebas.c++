#include<bits/stdc++.h>
#include<vector>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

vector<string> grapho(1000);
bool vis[1000][1000];
int movementInX[] = {-1,1,0,0,-1,-1,1,1};
int movementInY[] = {0,0,1,-1,1,-1,1,-1};

void dfs(int row, int column, int x, int y) {
    vis[row][column] = true;
    for (int i = 0; i < 8; i++) {
        int newRow = row+movementInX[i];
        int newColumn = column+movementInY[i];
        if (newRow>=0 && newRow<=x-1 && newColumn>=0 && newColumn<=y-1 && grapho[newRow][newColumn] == '#') {
           if (!vis[newRow][newColumn]) {
                dfs(newRow,newColumn,x,y);
            }
        } 
    }
}

int main() {
    input;
    output;
    int rows, columns;
    cin>>rows>>columns;
    for (int i = 0; i < rows; i++) {
        cin>>grapho[i];
    }
        
    int amoebasCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (!vis[i][j] && grapho[i][j] =='#') {
                dfs(i,j,rows,columns);
                amoebasCount++;
            }   
        }   
    }
    cout << amoebasCount<<endl;
}