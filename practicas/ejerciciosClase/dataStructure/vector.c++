#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<string> myVector(10,"Hello World"); //Creates 10 cell, with the given values, and inserts it in the vector
    myVector.push_back("World Hello"); //We add a created object with the given values
    cout<<"Size: "<< myVector.size()<<endl; //We see the size of the vector
    cout<<myVector.back()<<endl; //Returns the last element
    cout<<myVector.front()<<endl; //Returns the first element
    cout<<myVector.at(1)<<endl; //Returns the element at position ‘1’
    myVector.resize(20); //Changes the size of the vector
    myVector.empty(); //We can know if the vector is empty

    vector<int>::iterator it; //We add an iterator, so we can se through al the vector
    for(it = myVector.begin(); it != myVector.end(); it++){
        cout << *it <<endl; 
    }
}