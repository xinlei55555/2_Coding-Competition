#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin>>n;
    // unordered_multiset<char> arr; char a;
    unordered_map<char, vector<ll>> arr; char a;
    // vector<char> a(n);
    for(ll i=1;i<=n;i++) {cin>>a;if(arr.find(a)==arr.end()) {arr.insert(pair<char, vector<ll>> (a, {i}));} else {arr[a].push_back(i);}}
    // for(auto x: arr) {cout<<x.first<<" "; for (auto y:x.second) cout<<y<<"\n";}
    ll k;
    cin>>k;
    // vector<string> arr(k);
    for(ll i=0;i<k;i++) {
        // unordered_set<char> tmp = arr;
        // unordered_multiset<char> s;
        // for(int i=0;i<s.size();i++){

        // }
        unordered_map<char, ll> str;
        ll mx=-1;
        string s; cin>>s;char c;
        for(ll i=0;i<s.size();i++){if (str.find(s[i])==str.end()) {str[s[i]]=0;} else{str[s[i]]++;} mx = max(arr[s[i]][str[s[i]]], mx);}//if (arr.find(s[i]) != arr.end()) mx=max(arr[c], mx);}
        cout<<mx<<"\n";
    }

    return 0;
}