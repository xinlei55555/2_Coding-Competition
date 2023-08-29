#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    // vector<string> poss = {"(","()()" };
    while(t--){
        string s;
        cin>>s;
        if(s=="()") {cout<<"NO\n"; continue;}
        bool ind=false;
        for(int i=0;i<s.size()-1;i++) {
            
        if(s[i]==')' && s[i+1]=='(' ){ind=true;break;}
        }
        if(ind){
                cout<<"YES\n";
                for(int j=0;j<s.size();j++){cout<<'(';}
                for(int j=0;j<s.size();j++) {cout<<')';}
                cout<<"\n";
            }
            else{
                cout<<"YES\n";
                for(int j=0;j<s.size();j++) cout<<"()";
                cout<<"\n";
            }
        


    }
    return 0;
}