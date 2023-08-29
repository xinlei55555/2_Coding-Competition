#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";
ll mx_sum,n;
vector<ll> a;

//by looking at the test cases, I noticed that the best configurations is always reverse a bunch of numbers at the end
void test1(){
    
    ll i=0;
    do{
        ll mx=0, sum=0;
        if(i>n*100) break;
        for(int i=0;i<n;i++) {sum+=(a[i]*(i+1)); mx=max(a[i]*(i+1), mx);}
        
        sum-=mx;
        debug("\n")
        debug(sum)
        // if(sum==2529){

        //     for(int i=0;i<n;i++) {sum+=(a[i]*(i+1)); cerr<<a[i]<<" ";}
        // }
        mx_sum=max(mx_sum, sum);
        i++;
        //if doesn't get bigger, no point in continuing
        // if(mx_sum!=sum) break;
    }while(next_permutation(a.begin(), a.end()));
}

void test(){
    ll i, mx=0;
    for(int j=0;j<n;j++){
        ll sum=0;
        for(i=0;i<j;i++){
            sum+=((i+1)*(i+1));
            // cerr<<((i+1))<<" ";
            mx=max((i+1)*(i+1), mx);
        }
        for(int k=n;k>j;k--){
            // debug(n-i)
            // debug(i+1)
            sum+=((k)*(n-k+j+1));
            // cerr<<((k))<<" ";
            mx=max((k)*(n-k+j+1), mx);
        }
        sum-=mx;
        mx_sum=max(mx_sum, sum);
        // cerr<<mx_sum<<"\n";
    }
    

}

int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        mx_sum=0; //a.clear();
        // for(int i=1;i<=n; i++){
        //     a.push_back(i);
        //     debug(i)
        // }
        test();
        cout<<mx_sum<<"\n";
    }
    return 0;
}