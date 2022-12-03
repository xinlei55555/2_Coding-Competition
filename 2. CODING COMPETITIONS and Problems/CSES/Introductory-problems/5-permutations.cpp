#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;cin>>n;
        //return 0 is a nice way to break the code, in another case (in a for loop), I would continue;
    //!if n=1
    if(n==1) {cout<<1; return 0;}
    if(n<=3) {cout<<"NO SOLUTION"; return 0;}
    for(i=n-1; i>0; i-=2) cout<<i<<" ";
    for(i=n; i>0; i-=2)cout<<i<<" ";
    return 0;
}