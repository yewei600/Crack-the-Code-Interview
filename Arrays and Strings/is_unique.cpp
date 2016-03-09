#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool is_unique(const char *str,int s){
    //need a hash table
    vector<char>uniqueList;
    uniqueList.clear();

    for(int i=0;i<s;i++){
        if(find(uniqueList.begin(),uniqueList.end(),str[i])!=uniqueList.end()){
           return false;
        }
        uniqueList.push_back(str[i]);
    }

    return true;

}




int main(){

    string str="abcdefg";
    const char* strArray=str.c_str();

    if(is_unique(strArray,str.length())){
        cout<<"True";
    }
    else{
        cout<<"False";
    }


    return 0;
}
