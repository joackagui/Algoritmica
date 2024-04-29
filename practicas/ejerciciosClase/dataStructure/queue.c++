#include<bits/stdc++.h>

using namespace std;

int main() {
    queue<int> myQueue; //FIFO   
    queue<int> myQueue2;
    myQueue.push(10); //We create an object, whose values is 10 and the add it to the queue
    myQueue.push(100); //We create an object, whose values is 100 and the add it to the queue
    myQueue.emplace(1000); //We just extend the queue adding the given value (1000), without creating an object
    cout<<myQueue.size()<<end; // We see the size of the queue
    cout<<myQueue.empty()<<endl; //We check if it's empty
    cout<<myQueue.front()<<endl; //We see the first element
    myQueue.pop(); //We remove the first element
    myQueue.swap(meQueue2); //We exchange the values between the two given stacks
} 