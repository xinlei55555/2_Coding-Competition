//!either use the debugger: https://www.geeksforgeeks.org/vs-code-build-run-and-debug-in-c/
//or...
#include <bits/stdc++.h>
using namespace std;
//I use cerr, so that it doesn't register in the output files, such as output.out
    //
#define debug(x) cerr<<#x<<" : "<<x<<"\n";

//debugging a vector of int;
void _print(vector<int> v){
    for(int x:v) cout<<x;
}

//debugging ANY type of vector.
template <class T> void _print2(vector<T> v){
    for(T x:v) cout<<x;
}
int main(){
    int a=20;
    debug(a)

    vector<int> v={1,2,3,4};
    // for(int x:v) cout<<"x "<<x;
    _print(v);

    vector<string> v1={"string", "sjekj"};
    _print2(v1);
    return 0;
}