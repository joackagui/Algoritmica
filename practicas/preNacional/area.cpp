#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin) //Uses file as an input
#define output freopen("out.txt", "w", stdout) //Creates a file or updates the output

int main(){
    input;
    output;
    int a, b, c, limInf, limSup;
    cin>>a>>b>>c>>limInf>>limSup;
    int solInf = 0;
    int solSup = 0;
    int solFin = 0;
    int divisor = 6;
    int rootOne, rootTwo;
    rootOne = (-b-sqrt(b*b-4*a*c))/2*a;
    rootTwo = (-b+sqrt(b*b-4*a*c))/2*a;
    if(rootOne > limInf && rootTwo < limSup){
        solInf = 2*a*pow(limInf, 3)+3*b*pow(limInf, 2) + 6*c*limInf;
        solSup = 2*a*pow(rootOne, 3)+3*b*pow(rootOne, 2) + 6*c*rootOne;
        solFin += abs(solSup-solInf);
        solInf = 2*a*pow(rootOne, 3)+3*b*pow(rootOne, 2) + 6*c*rootOne;
        solSup = 2*a*pow(rootTwo, 3)+3*b*pow(rootTwo, 2) + 6*c*rootTwo;
        solFin += abs(solSup-solInf);
        solInf = 2*a*pow(rootTwo, 3)+3*b*pow(rootTwo, 2) + 6*c*rootTwo;
        solSup = 2*a*pow(limSup, 3)+3*b*pow(limSup, 2) + 6*c*limSup;
        solFin += abs(solSup-solInf);
    } else if(rootOne > limInf && rootTwo > limSup){
        solInf = 2*a*pow(limInf, 3)+3*b*pow(limInf, 2) + 6*c*limInf;
        solSup = 2*a*pow(rootOne, 3)+3*b*pow(rootOne, 2) + 6*c*rootOne;
        solFin += abs(solSup-solInf);
        solInf = 2*a*pow(rootOne, 3)+3*b*pow(rootOne, 2) + 6*c*rootOne;
        solSup = 2*a*pow(limSup, 3)+3*b*pow(limSup, 2) + 6*c*limSup;
        solFin += abs(solSup-solInf);
    } else if(rootOne < limInf && rootTwo < limSup){
        solInf = 2*a*pow(limInf, 3)+3*b*pow(limInf, 2) + 6*c*limInf;
        solSup = 2*a*pow(rootTwo, 3)+3*b*pow(rootTwo, 2) + 6*c*rootTwo;
        solFin += abs(solSup-solInf);
        solInf = 2*a*pow(rootTwo, 3)+3*b*pow(rootTwo, 2) + 6*c*rootTwo;
        solSup = 2*a*pow(limSup, 3)+3*b*pow(limSup, 2) + 6*c*limSup;
        solFin += abs(solSup-solInf);
    } else{
        solInf = 2*a*pow(limInf, 3)+3*b*pow(limInf, 2) + 6*c*limInf;
        solSup = 2*a*pow(limSup, 3)+3*b*pow(limSup, 2) + 6*c*limSup;
        solFin += abs(solSup-solInf);
    }
    if(solFin%2 == 0){
        divisor /= 2;
        solFin /= 2;
    }
    if (solFin%3 == 0){
        divisor /= 3;
        solFin /= 3;
    }
    cout<<solFin<<"/"<<divisor<<endl;
    }

