#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll q, i;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        //I gotta reset curr's value too, since I am playing with many values
        ll mn=101, curr=101;
        for(i=2;i<s.size();i++){
            //checking before
            // curr=(s.size()-1)-i + (i-2);
            // debug(i)
            if(s[i-1]=='O'){
                curr=0;     
                if(s[i-2]!='M') curr++;
                if(s[i]!='O') curr++;
            }
            mn=min(mn, curr);
        }
        
        if(mn==101){
            cout<<"-1\n";
        }
        else cout<<mn+s.size()-3<<"\n";
    }

    return 0;
}