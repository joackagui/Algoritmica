#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin);
#define output freopen("out.txt", "w", stdout);

int main(){
    //input; 
    output;
    list<int> myList;
    myList.push_back(1); //Adding to the last element of the list
    myList.push_back(2);
    myList.push_back(3);
    cout<<myList.size()<<end; // We see the size of the list
    cout<<myList.empty()<<endl; //We check if it's empty
    cout<<myList.front()<<endl; //We see the first element
    cout<<myList.back()<<endl; //We see the last element
    myList.pop_front(); //We remove the first element
    myList.pop_front(); //We remove the last element
    myList.insert(1,5); //We add the value (5) at a given position (1)

    list<int>::iterator it; //We need an iterator to keep track of the list
    it = theList.begin();
    cout << *it << endl;
    for(it = theList.begin(); it != theList.end(); it++){
        cout << *it << endl; 
    }
}