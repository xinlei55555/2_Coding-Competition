#include <bits/stdc++.h>
using namespace std;
char s, last;
int sum=0, s1, l1;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cin>>last;
    // l1=last-'a';
    //!note: we start at a!
    l1=0;
   // cout<<l1;
    while(cin>>s){
       // cerr<<"HI";
        s1=s-'a';
            //I gotta take the absolute of both sides!
        //cout<<s1;
        //I have to substract 26, since I have 26 elements!
            //additionally, I substract 26, OUTSIDE the absolute value!
        sum+=min(abs((l1)-(s1)), 26-abs(((l1)-(s1))));
       // cout<<min(abs((l1)-(s1)), 26-abs(((l1)-(s1))))<<" ";
        l1=s1;
    }
    cout<<sum;
    return 0;
}