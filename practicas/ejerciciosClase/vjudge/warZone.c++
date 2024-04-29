#include<bits/stdc++.h>
#include<vector>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    int s, b;
    while(cin >> s >> b && s && b) {
            bool foundf = false;
            bool foundl = false;
            vector<int> soldiers(s);
            for (int i = 0; i < s; i++) {
                soldiers[i] = i + 1;
            }
            for (int i = 0; i < b; i++) {
                int l, r;
                cin >> l >> r;
                for (int k = l;k <= r; k++) {
                soldiers[k-1] = -1;
                }
                foundf = false;
                foundl = false;
                for (int j=0; j<s; j++) {
                    if(soldiers[j] == -1 && !foundf){
                        foundf = true;
                        if(j == 0){
                            cout<<"*"<<" ";
                        }else{
                            cout<<soldiers[j-1]<<" "; 
                        }
                    } else if(soldiers[j] != -1 && foundf && !foundl){
                        cout<<soldiers[j]<<endl;
                        foundl = true;
                    } 
                }
                if(foundf && !foundl){
                    cout<<"*"<<endl;
                    }
            }
        cout<<"-"<<endl;
        
    }
}