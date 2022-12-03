#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    
    cout<<bitset<8>(5)<<endl;
    cout<<x<<endl;

    x = ~x;
    cout<<bitset<8>(x)<<endl;
    cout<<x;
    return 0;
}