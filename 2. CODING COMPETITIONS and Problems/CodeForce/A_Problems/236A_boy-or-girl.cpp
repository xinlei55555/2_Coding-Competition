#include <bits/stdc++.h>
using namespace std;
main(){
    string s;
    cin>>s; 
    //distinct characterTT
        //I thus used a set
    unordered_set<char> s1;
    for(auto x:s) s1.insert(x);
    cout<<(size(s1)%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!"); 
}