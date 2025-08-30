#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main(){
    input;
    output;
    int p;
    
    //while(cin>>p && p != 1){
        bool possible = true;
        queue<int> myQueue;
        int teams, matches;
        cin>>teams>>matches;
        int table[teams+1];
        for(int i = 1; i <= teams; i++){
            int points;
            cin>>points;
            table[i] = points;
        }
        for(int i = 0; i < matches; i++){
            int t1, t2;
            cin>>t1>>t2;
            if(t1 == teams){
                myQueue.push(0);
                table[t1] += 2;
            } else if(t2 == teams){
                myQueue.push(2);
                table[t2] += 2;
            } else {
                if((table[t1]-table[t2]) >= 2){
                myQueue.push(2);
                table[t2] += 2;
                } else if ((table[t1]-table[t2]) <= 1 && (table[t1]-table[t2]) >= -1){
                    myQueue.push(1);
                    table[t1] += 1;
                    table[t2] += 1;
                } else {
                    myQueue.push(0);
                    table[t1] += 2;
                }
            }
        }
        for(int i = 1; i <= teams - 1; i++){
            if(table[i] > table[teams]){
                possible = false;
            }
        }
        if(possible){
            cout<<myQueue.front();
            myQueue.pop();
            for(int i = 0; i<myQueue.size() + i; i++){
                cout<<" "<<myQueue.front();
                myQueue.pop();
            }
        } else {
            cout<<"NO";
        }
        cout<<endl;
        for(int i = 1; i <= teams; i++){
            cout<<table[i]<<endl;
        }
    //}


}
