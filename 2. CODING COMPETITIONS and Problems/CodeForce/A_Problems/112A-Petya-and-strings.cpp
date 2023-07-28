#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2; 

//strcmp would do the same thing as compare, just that it doesn't take into account the lowercase and upper cases
    cin>>s1>>s2;
    //the letter's case doesn't not matter
        //tolower only works for chars  
    for(auto &x: s1) x=tolower(x);
    for(auto &x: s2) x=tolower(x);
    // cout<<s1<<s2;
    int i=s1.compare(s2);
    if(i<0) cout<<(-1);
    else if(i>0) cout<<1;
    else cout<<0;
    return 0;
}