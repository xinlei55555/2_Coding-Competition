#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<" \n";
int main(){
    int t;cin>>t;
    while(t--){
        int m, k, a1, ak, fancy1=0, fancyk=0;
        cin>>m>>k>>a1>>ak;
        // m-=(a1+(ak*k));
        // if(m<(a1+(ak*k))){
        //     m=ceil(m/ak)
        // }

        if(a1<(m%k)){
            fancy1+=((m%k)-a1);
            m-=(m)%k;
            a1=0;
        }
        else{
            a1-=(m%k);
            m-=(m%k);
            // debug(a1)
            m-=floor(a1/k)*k; //BRUH YOU DIDN"T MULTIPLY
        }
        // cerr<<m<<"\n";
        fancyk+=max(0, (m/k)-ak);

        // if(ak*k>m) m=m%k;


        // //remove all multiples of k from a1;
        // int n1=floor(a1/k);
        // a1-=n1*k;
        // m-=n1*k;
        



        // fancy+=max(0, n-ak);
        // fancy+=max(0, (m%k)-a1);
        
        cout<<fancy1+fancyk<<"\n";
    }
}