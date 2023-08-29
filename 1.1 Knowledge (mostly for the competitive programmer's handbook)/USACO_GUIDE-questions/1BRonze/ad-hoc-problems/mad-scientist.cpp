#include <bits/stdc++.h>
using namespace std;
//!The editorial does exactly the same thing, but without changing all the 'G' into H into the first place, it just continue while there is a mismatch, and it calls it a "group"
int main(){
    ofstream cout("breedflip.out");
    ifstream cin("breedflip.in");
    int n; cin>>n;
    //the problem would be the same, if the goal was to convert all into "g"
        //but that you start, for the b string, by converting every change in the first string to the second string

    string a,b;
    cin>>a>>b;
    //~changing all of a-string into H
    for(int i=0;i<n;i++){
        //~changing all the changes into the invert in the b0-string
        if(a[i]=='G') b[i]=(b[i]=='G'? 'H':'G');
    }
    //~find the number of groups of 'G' in b
    int ans=0;
    bool g=false;
    for(int i=0;i<n;i++){
        if(g==false&&b[i]=='G'){
            g=true;
            ans++;
        }
        if(b[i]=='H'){
            g=false;
        }
    }

    cout<<ans;

    return 0;
}