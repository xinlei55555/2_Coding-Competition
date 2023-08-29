#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

//!error, what you did is that you inputted   values, sorted them, and found how many people were before and after rudolf
//!instead, you could've just computed the values for rudolf, and then, for every new participant, compare the values of the participants. If the new participant is better, lower rudolf position!
ll sr, tr, pos, n, m, h;
vector<vector<ll>> sums;

bool calc(int idx){
    sort(sums[idx].begin(), sums[idx].end());
    ll sum=0, time=0, pen=0;
    for(int i=0;i<m&&time+sums[idx][i]<=h;i++){
        sum++;
        //calculating penalty
        time+=sums[idx][i];
        pen+=(time);
    }
    debug(pen)
    debug(sum)
    if(idx==0) {tr=pen, sr=sum;return false;}
    if(sr<sum) return true;
    if(pen<tr && sum==sr) return true;
    else return false;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        sr=0, tr=0, pos=1;
        cin>>n>>m>>h;
        sums.assign(n, vector<ll>(m, 0));
        for(int j=0;j<m;j++){
            cin>>sums[0][j];    
        }
        pos+=calc(0);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>sums[i][j];
            }
            pos+=calc(i);
        }
        cout<<pos<<"\n";
    }
    return 0;
}   


//!runtime error, my solution was too slow and was not efficient.
// vector<vector<ll>> arr;
// vector<pair<ll, ll>> sums, same;
// ll n, m, h, srudolf, prudolf;

// //the ones with the most points at first (so greater int)
// bool cmp1(pair<ll, ll> a, pair<ll, ll>b){
//     return a.first>b.first;
// }

// //sort for the smaller time used to be the winners
// bool cmp(pair<ll, ll> a, pair<ll, ll> b){
//     return a.second<b.second;
// }

// void solve(){
//     same.clear();
//     ll a = -1;
//     for(int i=1;i<=n;i++) {
//         if(srudolf==sums[i-1].first) {
//             same.push_back(sums[i-1]);
//             if(a==-1) a=i;
//         }
        
//     }
//     sort(same.begin(), same.end(), cmp);
//     debug(same.size())
//     debug(a)
//     for(int j=0;j<same.size();j++){
//         debug(j)
//         if(same[j].first==srudolf&&same[j].second==prudolf) {cout<<a+j<<"\n";return;}
//     }
// }

// int main(){
//     ll t; cin>>t;
//     while(t--){
//         srudolf=0; prudolf=0;
//         cin>>n>>m>>h;
//         // vector<ll> val[1000001]; ==> THIS WAS CAUSING FAULT
//         // arr.resize(n, vector<ll>(m,0)); ==> resize only sets the new elements to 0
//         arr.assign(n, vector<ll> (m, 0));
//         sums.clear();
//         sums.resize(n);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>arr[i][j];
//             }
//             sort(arr[i].begin(), arr[i].end());
//             ll sum=0, time=h;
//             sums[i].second=0;
//             for(int idx=0;idx<m; idx++){
//                 if(time-arr[i][idx]<0) break;
//                 time-=arr[i][idx];
//                     //!it's not just the sum, it's the sum of all the times previous to it.
//                 sums[i].second+=(arr[i][idx]+sums[i].second);
//                 sum++;
//             }
//             if(i==0) prudolf=sums[i].second, srudolf=sum;
//             sums[i].first=sum;
//             // sums[i].second=time;
//         }
//         sort(sums.begin(), sums.end(), cmp1);
//         solve();
//     }
//     return 0;
// }