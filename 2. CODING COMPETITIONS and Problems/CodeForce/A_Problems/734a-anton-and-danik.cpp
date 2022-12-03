#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    n=0;
    cin>>s;
    for(auto x:s) {if(x=='D') n++; else n--;}
    if(n>0) cout<<"Danik";
    else if(n==0) cout<<"Friendship";
    else cout<<"Anton";
    return 0;
}