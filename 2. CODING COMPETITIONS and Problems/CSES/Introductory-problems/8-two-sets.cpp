#include <bits/stdc++.h>
#define debug(x) //cerr<< #x<<" "<<x<<"\n";
using namespace std;
typedef long long ll;

ll checkSum(ll n){
    if((n*(n+1)/2)%2!=0){
        return -1;
    }
    return n*(n+1)/2; 
}

unordered_set<ll> knapsack(ll sum, ll n){
    unordered_set<ll> arr;
    for(int i=n;i>=1;i--){
        if(i<=sum) {
            sum-=i;
            arr.insert({i});
        }
    }   
    if(sum==0) return arr;
    if(n==0) return arr;
    else knapsack(sum, n-1);
}

int main(){
    ll n;
    cin>>n;
    ll sum = checkSum(n);
    if(sum!=-1){
        unordered_set<ll> arr = knapsack(sum/2, n);
        debug(arr.size())
        debug(sum)
        if(arr.empty()) {
            cout<<"NO";
            return 0;
        }
        cout<<"YES\n"<<arr.size()<<"\n";
        for(auto x: arr) cout<<x<<" ";
        cout<<"\n"<<n-arr.size()<<"\n";
        for(int i=1;i<=n;i++){
            debug(i)
            if(arr.find(i)==arr.end()) cout<<i<<" ";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}






// int main(){
//     int n;
//     cin>>n;
//     unordered_set<int> a={1,2}, b={3};
    
//     if((n+1)>4) {
//         for(int i=4; i<n; i+=4){
//             a.insert({i, i+3});
//             b.insert({i+1, i+2});
//         }
//     cout<<"YES\n";
//     cout<<a.size()<<"\n";
//     for(auto x: a) cout<<x<<" ";
//     cout<<"\n";
//     cout<<b.size()<<"\n";
//     for(auto x:b) cout<<x<<" ";

//     //pour 11, ca serait 
//     // 1 2    4    7    8      11
//     //    3     5 6       9 10
//     return 0;}
//     else{cout<<"NO"; return 0;}
// }