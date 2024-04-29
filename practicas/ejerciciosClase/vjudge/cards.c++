#include<bits/stdc++.h>
#include<vector>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main(){
    input;
    output;
    int n;
    
    while(cin>>n && n != 0){
        int number = -1;
        int preNumber = 0;
        string id;
        vector<string> cardNumber(n);
        vector<string> cardName(n);
        vector<string> cardOrder(n);
        vector<int> cardPick(n);
        for (int i = 0; i < n; i++){
            cin>>id;
            cardNumber[i] = id;
            cin>>id;
            cardName[i] = id;
        }
        for (int i = 0; i < n; i++){
            preNumber = number;
            number = (number + cardName[i].size())%13;
            int contador = 1;
            for(int j = cardName[i].size(); j>0; contador++){
                if(cardPick[((preNumber)+contador)%13] != 0){
                    number = number+1;
                } else {
                    j--;
                }
            }
            number = number%13;
            cardOrder[number] = cardNumber[i];
            cardPick[number] = 1;        
        }
        for (int i = 0; i < n; i++){
            cout<<cardOrder[i]<<endl;
        }
    }
}
