//the thing, is that I didn't even understand the quetsions, but I believe i was asked to find how many times an element apepars in another vector, like, repetitively
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int  h[n], g[n], i, ans=0;
    for(i=0; i<n; cin>>h[i]>>g[i],i++);
    
    for(i=0; i<n;i++) for(int j=0; j<n; j++) if(h[i]==g[j]) ans++;
        
        //this is useless...
        // if(i%2==0) {cerr<<"HI";cin>>h[i]>>g[i];}
        // if(i%2!=0) {cerr<<"Hello";cin>>g[i]>>h[i];}
            //~NOTE! h+n, has to be the size of the array!!!! TT
                //BUt, in my case, i DON"T want the last element (since it's just the element I just added!)
        // if(find(h, h+(n), g[i])!=(h+(n))) ans++;
        // if(find(g, g+(n), h[i])!=(g+(n))) ans++;
        //I have no idea what the hell the question is asking.., but

    
    // for(int j=0;j<n;cout<<h[j]<<" ", j++);
    // // for(int j=0;j<n; j++)cout<<h[j]<<" ";

    cout<<ans;
    return 0;
}