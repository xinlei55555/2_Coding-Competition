
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";



///THIS IS TNNOT EVEN BINARY SEARCH!!!!

ll n; //!don't use floats.
ll l, t, P, numpr, points;
ll numd(){
    // while(ans<=n){
    //     if(points >= P) {return ans;}
    //     ans++;
    //     points+=(min(2LL, numpr)*t+l);
    //     numpr-=min(2LL, numpr);
    // }
    //binary search
    //check for a number of days
    ll lo=-1, hi=n, ans; 
    while(lo<hi){
        ans = lo+(floor((hi-lo)/2))+1;
        points = (t*(min(numpr, ans*2))) + ans*l;
        if(points>=P) {
            hi = ans-1;
            if(points == P) return ans;
            if(ans>=0 and (t*(min(numpr, (ans-1)*2))) + (ans-1)*l<P) return ans;
            else if(ans>=1 and (t*(min(numpr, (ans-2)*2))) + (ans-2)*l<P) return ans-1;
            else if(ans>=2 and (t*(min(numpr, (ans-3)*2))) + (ans-3)*l<P) return ans-2;
        }
        else lo = ans+1;
        debug(ans) 
        debug(points)
    }
    // return answer;
}
int main(){
    ll tc; cin>>tc;
    while(tc--){
        cin>>n>>P>>l>>t;
        // numpr = ceil(n/7); don't use floats.
        numpr = (n%7==0)? n/7:n/7+1;
        points = 0;

        //!this is constant time... no need to use any while loo.
        ll hi=max((P-1)/(l+2*t)+1,(P-t*numpr-1)/l+1);
        // ll hi = numd();

        cout<<n-hi<<"\n";
    }
    return 0;
}