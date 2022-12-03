#include <bits/stdc++.h>
using namespace std; 
main(){
    string s;
    int n=0 ;
    cin>>s;
    //if it's lower, it'll add 1 to n
    for(auto x:s) n+=(islower(x)!=0? 1: 0);
    //!If you divide an int (s.size(), by another int, it will already FLOOR the value!!!!) To be able to ceil it, you should divide by 2.0
    if(n>=ceil(s.size()/2.0)) for(auto& x:s){ x=tolower(x);}
    else for(auto& x:s)x=toupper(x);
    cout<<s; 
}