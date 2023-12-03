#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        ll groups = 1;
        vector<ll> numbers = {};
        ll tmp = 1;
        //determining the number of groups in the string
        for(int i=1;i<s.size();i++){
            if(s[i] != s[i-1]){numbers.push_back(tmp);groups ++;tmp=1;}
            else tmp++;
        } 
        numbers.push_back(tmp);
        
        //number of ways to delete
        ll ans=1;
        for(int i=0;i<numbers.size();i++){
            //somehow I got the wrong formula
            ans*=numbers[i];
            // debug(numbers[i])
            ans%=998244353;
        }
        for(int j=1;j<=s.size()-groups;j++){ans*=j; ans = ans %998244353;}
        // debug(numbers[0])
        if(groups == 0) cout<<0<<" "<<0<<'\n';
        else{
            // debug(groups)
            cout<<s.size()-groups<<" "<<ans<<"\n";
        }
    }
    return 0;
}
//===========================================
/*
Not really lol, so basically, there is a slightly greedy algorithm, which consists in separating into the groups of all 1 and 1 all 0, then you can choose n-1 of each group to replace.
https://codeforces.com/blog/entry/120773
*/

// vector<char> poss; string s; 
// int mn, num;
// void func(int k){
//     if(k==s.size()){

//         for(int i=1;i<poss.size();i++){
//             if(poss[i]==poss[i-1]) return;
//         }
//         if(mn<(s.size()- poss.size())) return;
//         if(mn>(s.size()-poss.size())) {
//             mn = s.size()-poss.size();
//             // subsets.clear();
//             num = 1;        
//             // subsets.push_back(poss);
//         }
//         else if(mn==(s.size()-poss.size())){
//             num++;
//             num%=998244353;
//             // subsets.push_back(poss);
//         }
//         debug(mn)
//         debug(num)
//         return;
//     }
//     // if(k>0 && s[k-1] != s[k+1]) 
//     func(k+1);
//     // if(k>0 && s[k-1] != s[k]) 
//     poss.push_back(s[k]);
//     func(k+1);
//     poss.pop_back();
// }

// int ans;
// void factorial(int o){
//     debug(ans)
//     if(o<=1) return;
//     else{
//         ans*=o;
//         factorial(o-1);
//     }
// }

// int main(){
//     int t; cin>>t;
//     while(t--){
//         mn = 2*10e5, num = 0;
//         //dynamic programming
//         cin>>s;
//         int n=s.size();
//         func(0);
//         // for(int i=0;i<n; i++){
//         //     //either you add it or you don't

//         //     //then check if the previous character is the same as the current character
//         // }
//         ans=num;
//         factorial(num-1);
//         cout<<mn<<" "<<ans<<"\n";
//         poss.clear();
//     }
//    return 0;
// }

