#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    a=max(a,b);
//here, I could've also found the LCM, and divided both the top and the bottom by such a value. But yea no. 
    if(((6-a)+1)%6==0) cout<<(6-a+1)/6<<"/"<<1;
    else if(((6-a)+1)%2==0) cout<<(7-a)/2<<"/"<<3;
    else if(((6-a)+1)%3==0) cout<<(7-a)/3<<"/"<<2;
    else cout<<((6-a)+1)<<"/"<<6;
}