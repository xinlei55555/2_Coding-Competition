<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n, k, x, m=0;
        cin>>n>>k>>x;
        //knapsack
        vector<ll> ans = {};
        ll tmp=n;
        if(x!=1){cout<<"YES\n"<<n<<"\n";for(int i=0;i<n;i++){cout<<1<<" ";} cout<<"\n";continue;}
        //not one;
        if(x==1){
            while(tmp>0){
                if(tmp==1 || k==1) break;
                tmp-=2;
                m++;
                ans.push_back(2);
                if(tmp<=k && tmp!=1){
                    ans.push_back(tmp);
                    tmp=0;
                    m++;
                    break;
                }
            }
            if(tmp!=0){
                cout<<"NO\n";
                
            }
            if(tmp==0){
                cout<<"YES\n"<<m<<"\n";
                    for(auto val: ans){
                        cout<<val<<" ";
                    }
                cout<<"\n";
            }
        }
    }
        // if(x==1) {cout<<"NO\n"; continue;}

        // while(k>0){
        //     if(n==0 || k==0) break;
        //     if(k==x){
        //         k--;
        //     }
        //     else{
        //         if(n-k >= 0){
        //             ans.push_back(k);
        //             m++;
        //             n-=k;
        //         }
        //         else{
        //             k--;
        //         }
        //     }
        // }
        // if(n==0){    
        //     cout<<"YES\n"<<m<<"\n";
        //     for (auto val: ans){
        //         cout<<val<<" ";
        //     }
        //     cout<<"\n";
        // }
        // else{
        //     cout<<"NO\n";
        // }
    
    return 0;
}
=======
//!lesson: Coding competitions, first questions, usually O(1), no need to overcomplicate.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll t; cin>>t;
    while(t--){
        ll n, k,x; cin>>n>>k>>x;
        if(x!=1) {cout<<"YES\n"<<n<<"\n"; for(int i=0;i<n;i++){cout<<"1 ";}}
        else{
            if(k==1) cout<<"NO";
            else{
                if(n%2==0){
                    cout<<"YES\n"<<n/2<<"\n";
                    for(int i=0; i<n/2; i++) cout<<"2 ";
                }
                else if(n%2!=0){
                    if(k>=3){cout<<"YES\n"<<((n-3)/2)+1<<"\n"<<"3 "; for(int i=0;i<(n-3)/2; i++) cout<<"2 ";}
                    else cout<<"NO";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define debug(x) cerr<<#x<<" "<<x<<"\n";

// int main (){
//     ll t;
//     cin>>t;
//     while(t--){
//         int n, k, x, m=0;
//         cin>>n>>k>>x;
//         //knapsack
//         vector<ll> ans = {};
//         // ll tmp=n;
//         if(x!=1){cout<<"YES\n"<<n<<"\n";for(int i=0;i<n;i++){cout<<1<<" ";} cout<<"\n";continue;}
//         //not one;
//         if(x==1){
//             cout<<((k<3 && n%2==0)? "YES\n":"NO\n");
//             cout<<(k<3 && n%2==0 )? n/2:"";
//             // while(tmp>0){
//             //     if(tmp==1 || k==1) break;
//             //     tmp-=2;
//             //     m++s.push_back(2);
//             //     if(tmp<=k && tmp!=1){
//             //         ans.push_back(tmp);
//             //         tmp=0;
//             //         m++;
//             //         break;
//             //     }
//             // }
//             // if(tmp!=0){
//             //     cout<<"NO\n";
                
//             // }
//             if(tmp==0){
//                 cout<<"YES\n"<<m<<"\n";
//                     for(auto val: ans){
//                         cout<<val<<" ";
//                     }
//                 cout<<"\n";
//             }
//         }
//     }
        // if(x==1) {cout<<"NO\n"; continue;}

        // while(k>0){
        //     if(n==0 || k==0) break;
        //     if(k==x){
        //         k--;
        //     }
        //     else{
        //         if(n-k >= 0){
        //             ans.push_back(k);
        //             m++;
        //             n-=k;
        //         }
        //         else{
        //             k--;
        //         }
        //     }
        // }
        // if(n==0){    
        //     cout<<"YES\n"<<m<<"\n";
        //     for (auto val: ans){
        //         cout<<val<<" ";
        //     }
        //     cout<<"\n";
        // }
        // else{
        //     cout<<"NO\n";
        // }
    
>>>>>>> adbe092ab74c79ea9fa4831005620b28de03fee4
