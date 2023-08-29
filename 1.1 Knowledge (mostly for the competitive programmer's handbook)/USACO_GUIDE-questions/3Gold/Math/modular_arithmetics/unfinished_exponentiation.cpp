<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
#define MOD 1000000007
int main (){
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long ans=1, a, b;
        cin>>a>>b;
        if(pow(a, b)>pow(2, 6)){
            for(int j=0;j<b;j++){
            ans *= a;
            ans%=MOD;
            }
        }
        else{
            ans=static_cast<int>(pow(a,b))%MOD;
        }
        cout<<ans<<"\n";
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
#define MOD 1000000007
int main (){
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long ans=1, a, b;
        cin>>a>>b;
        if(pow(a, b)>pow(2, 6)){
            for(int j=0;j<b;j++){
            ans *= a;
            ans%=MOD;
            }
        }
        else{
            ans=static_cast<int>(pow(a,b))%MOD;
        }
        cout<<ans<<"\n";
    }
    return 0;
>>>>>>> adbe092ab74c79ea9fa4831005620b28de03fee4
}