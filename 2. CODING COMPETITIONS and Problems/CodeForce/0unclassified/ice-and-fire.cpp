#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    char s[300001],last,prev;
    long long n,i,j,ans,freq;

    while(t--){
        //I used this, since the string size were too small.
        cin>>n;
        //loop through possible x (number of players)
        
        for(i=2;i<=n;i++){
            cin>>s[i-2];
            prev=last;
            last=s[i-2];
            if(prev!=last)ans=i-1;
            //else answer does not change; 

            //go through each environment, for each battle;
                //if all environments are the same, smallest or biggest win
                //if environments change, only the last "same" battles counts, 1 gets eliminated
            // for(j=i-3; j>=0;j--){
            //     if(s[j]==last){
            //         ans--;
            //     }
            //     else break;
            // }
            cout<<ans<<" ";
        }
        cout<<"\n";
        //here, I will reset answer;
        ans=1;
    }
    return 0;
}