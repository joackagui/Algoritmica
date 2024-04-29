#include<bits/stdc++.h>

using namespace std;

int main() {
    stack<int> myStack; //FILO or LIFO     
    stack<int> myStack2;
    myStack.push(10); //We create an object, whose values is 10 and the add it to the stack
    myStack.push(10); //We create an object, whose values is 100 and the add it to the stack
    cout<<myStack.size()<<end; // We see the size of the stack
    cout<<myStack.empty()<<endl; //We check if it's empty
    cout<<myStack.top()<<endl; //We see the first element
    myStack.pop() //We remove the first element
    myStack.swap(myStack2); //We exchange the values between the two given stacks
} 