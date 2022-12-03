#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
    vector<char> a={'a','e','i','o','u','y'};
    for(int i=0; i<s.size(); i++) {
        s[i]=tolower(s[i]);
        if(find(a.begin(), a.end(), s[i])!=a.end()){
            //we don't print it hehe
            continue;
        }
            //basically, I keep every char as a lowercase
        else cout<<'.'<<s[i];
            
    }
    //cout<<s;
    return 0;
}