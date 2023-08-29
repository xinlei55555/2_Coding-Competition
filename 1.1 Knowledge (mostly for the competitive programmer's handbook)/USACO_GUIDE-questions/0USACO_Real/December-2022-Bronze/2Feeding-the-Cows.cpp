#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";

int main(){
    long long i,n,k,t,j,h,g,val; cin>>t;
    // bool skip;
    while(t--){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cin>>n>>k;
        vector<char> arr(n,'.'), ans(n,'.');
        for(i=0;i<n;i++) cin>>arr[i];
        //cin>>arr;
        //here are the last G, and H elements;
        g=-1; h=-1; val=0;
        //skip=false;

//!OMG FOUND IT !
        //I should stop before n-k, since i am doing n-k in another loop.
        for(i=0;i<n-k;i++){
            if(arr[i]=='G'){
                if(abs(g-i)<=k && g!=-1){
                    continue;
                }
                else if(g==-1 || abs(g-i)>k){ 
                    
                    ans[i+k]='G'; val++;g=i+k;
                }
                
            }
            else if(arr[i]=='H'){
                if (abs(h-i)<=k && h!=-1){continue;}
                else if(h==-1|| abs(h-i)>k){ 
                    
                    ans[i+k]='H'; val++;h=i+k;
                }
            }
            // debug(i)
            // debug(h)
            // debug(g)

        }
        //g and h are the indexes of the last 'H' and 'G' characters in the answer array

        //for elements between n-k and n
        for(i=n-k;i<n;i++){
            if(arr[i]=='G'){
                //to have something to change
                if(g==-1||i-k>g){
                    for(j=n-1;j>=i-k;j--){
                        if(ans[j]=='.') {ans[j]='G';val++;g=j; break;}
                    }
                }
                else continue;
            }

            else if(arr[i]=='H'){
                if(h==-1||i-k>h){
                    for(j=n-1;j>=i-k;j--){
                        if(ans[j]=='.') {ans[j]='H';val++;h=j;break;}
                    }
                }
                else continue;
            }
        }
        cout<<val<<"\n";
        for(auto x:ans) cout<<x;
        cout<<"\n";

    }

    return 0;
}