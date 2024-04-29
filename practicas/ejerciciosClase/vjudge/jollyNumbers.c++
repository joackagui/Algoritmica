#include<bits/stdc++.h>
#include <stack>

using namespace std;

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)

int main(){
    stack<int> s1;
    stack<int> s2;
    int n;
    bool furula = true;
    while(cin){
        cin>>n;
        s1.push(n);
    }
    for(int i = 0; s1.size(); i++){
        s2.push(s1.top());
        s1.pop();
    }
    int a = s2.top();
    s2.pop();
    int b = s2.top()-1;
    s2.pop(); 
    int sum;
    for(int i = 0; s2.size()-2;i++){
        if((a-b)>0){
            sum = a-b;
        } else {
            sum = b-a;
        }
        if(sum == s2.top()){
            a = b+1;
            b = s2.top()-1;
            s2.pop();
        } else {
            furula = false;
            for(int i = 0; i<s2.size(); i++){
                s2.pop();
            }
        }
    }
    if(furula){
        cout<<"Jolly"<<endl;
    } else {
        cout<<"Not jolly"<<endl;
    }
    return 0;
}