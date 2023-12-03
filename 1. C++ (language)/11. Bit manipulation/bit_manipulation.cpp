#include <bits/stdc++.h>
//!!! great website that contains nifty hacks with bitwise : http://www.graphics.stanford.edu/~seander/bithacks.html

using namespace std;

int main(){
    int x = 5;
    
    cout<<bitset<8>(5)<<endl;
    cout<<x<<endl;
    cout<<typeid(x).name()<<endl; //returns an int

    x = ~x;
    cout<<bitset<8>(x)<<endl;
    cout<<x<<"\n";

    //right-shifting and left shifting operator
    //https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
    unsigned char il=5; //5 = 00000101 ==> created from left to right.
    cout<<(il>>1); //should return the number with bits 00000010
    //by shifting by two, I am changing the position of the bits by two places
    
    return 0;
}