#include <cmath>
#include <cstdio>
#include <bitset>
#include <iostream>
#include <string>
using namespace std;




void FlipBitToWin(){


}

 long toBinary(int num){
    string binary = bitset<8>(num).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<decimal<<endl;
    return decimal;
}





int main(){

    double num = 6;
    long bin=toBinary(num);

    return 0;
}
