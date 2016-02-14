#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;



/*
1. find how many lines are in the file
2. print the last K lines of file
*/


int main(){
    char fileLine[500];
    int numLines=0, k;
    ifstream inStream("secondAmend.txt",ios::in);

    while(!inStream.eof()){
        inStream.getline(fileLine,500,'\n');
    }
    numLines--;
    
    cout<<"There are "<<numLines<<" lines in the file"<<endl;
    
    cout<<"enter a number less than "<<numLines<<" : ";
    cin>>k;
    
    cout<<"printing last "<<k<<" lines of the file..."<<endl;
    
    //set cursor to the last k line
    




    return 0;
}
