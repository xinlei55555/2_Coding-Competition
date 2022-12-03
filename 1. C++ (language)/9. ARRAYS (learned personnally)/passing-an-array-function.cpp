#include <bits/stdc++.h>
using namespace std;

// also, by default, everytime we pass an array into a function, we pass it by reference.
void hi(int a[]){
    //!by passing a like this, we are passing a pointer to a[]'s first value.
        //then, we can loop...

    //for(auto x:(a)) cout<<x;
    cout<<(*a);
    for(auto x=a; x<(a+5); x++) cout<<*x;
    return;
}
int main(){
    
   
    int a[5] ={0};
    hi(a);
    
    return 0;
}