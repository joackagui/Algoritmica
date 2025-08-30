#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    int printers;
    cin>>printers;
    int days = 1;
    for(int i = printers; i > 1; ){
        days += 1;
        i = (i+1)/2;
    }
    cout<<days<<endl;
}