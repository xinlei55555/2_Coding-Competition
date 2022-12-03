#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char p=s[0];
    //start with answer at 1, in case it just inputs 1 element!
    int ans=1, curr=1;
    //!you gotta start at curr=1, since the current value counts as 1
        //also, no need to save a value as p, for s[i-1], just need to use s[i-1]
    for(int i=1;i<s.size();i++){if(p==s[i]){curr++;}else {curr=1;}ans=max(curr, ans);p=s[i];}
    cout<<ans;
    return 0;
}