#include<bits/stdc++.h>
using namespace std

int main() {
    int array[10]; //Creates an array of size 10; all the values should be 0 by default 
    memset(array, 0, sizeof(array)); // We are making sure every cell contains 0
    for(int i = 0; i< 10; i++) { //The same as using memset
        array[i] = 0;
    } 
}