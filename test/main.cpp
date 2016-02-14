#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

#define SIZE 20


void Reverse(char* str,int s){
    char tmp;
    char *sEnd=str+s-1;
    bool startReverse=false;
    int i;

    //pointer to end of string
    while(*sEnd!='\0'){
        sEnd--;
    }
    sEnd--;  //go 1 place before '\0'

    while(str<sEnd){
        tmp=*sEnd;
        *sEnd=*str;
        *str=tmp;
        str++;
        sEnd--;
    }
}


int main(){


    char str[SIZE];
    cout<<"enter a string: ";
    cin>>str;

    cout<<"print string: ";
    cout<<str<<endl;

    Reverse(str,SIZE);
    cout<<str<<endl;


    return 0;
}
