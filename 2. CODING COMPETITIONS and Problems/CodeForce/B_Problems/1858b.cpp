#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
#define MAX 1000000001
//#I had the right solution, it's just that I didn't implement it well enough. It is the good way to look for the sum of all , then substract for each 
int solve(int d, vector<int> x)
{
    int ans = 0;
    for (int i = 1; i < x.size(); i++)
    {
        ans += (x[i] - x[i - 1] - 1) / d;
    }
    ans += int(x.size()) - 2;
    return ans;
}

void solve()
{
    #define tests

    int n, m, d;
    cin >> n >> m >> d;
    vector<int> r(m);
    for (int i = 0; i < m; i++) cin >> r[i];
    r.insert(r.begin(), 1 - d);
    r.push_back(n + 1);

    int ans = 2e9;
    vector<int> res;
    for (int i = 1; i <= m; i++)
    {
        int A = r[i] - r[i - 1] - 1;
        int B = r[i + 1] - r[i] - 1;
        int C = r[i + 1] - r[i - 1] - 1;
        int D = C / d - (A / d + B / d);
        if (D < ans)
        {
            ans = D;
            res.clear();
        }
        if (D == ans)
        {
            res.push_back(r[i]);
        }
    }
    cout << ans + solve(d, r) - 1 << ' ' << res.size() << endl;
}

int main()
{
    int t = 1;
    #ifdef tests
    cin >> t;
    #endif
    while (t--)
    {
        solve();
    }
}
// ll n,m,d;
// ll add_cookie(ll distance, bool shop){
//     ll numc=floor(distance/d);
//     if(shop && distance%d!=0){
//         numc++;
//     }
//     return numc;
// }
// vector<ll> arr;
// ll change_cookie(ll new_sum, ll i){
//     new_sum-=(add_cookie(arr[i+1]-arr[i]));
//     new_sum-=(add_cookie(arr[i]-arr[i-1]));
//     new_sum+=(add_cookie(arr[i+1]-arr[i-1]));
//     return new_sum;
// }

// int main(){
//     int t;cin>>t;
//     while(t--){
//         cin>>n>>m>>d;
//         ll numc=1;
//         arr.assign(n, 0);
//         arr[0]=1;
//         for(ll i=1;i<=m;i++) {cin>>arr[i]; numc+=add_cookie(arr[i]-arr[i-1], false); }
//         numc+=(add_cookie(n-arr[m], arr[m]==n));

//         ll mn=MAX, same=1;

//         for(int i=1;i<m;i++){
//             ll new_sum;
//             if(i==m-1){
//                 if(arr[m]==n) new_sum=change_cookie(numc, i);
//             }
            
//             else{
//                 new_sum=change_cookie(numc, i);
//             }

//             if(mn==new_sum) {same++;continue;}
//             mn=min(mn,new_sum); 
//             if(mn==new_sum) {same=1;}
//         }

//         cout<<mn<<" "<<same<<"\n";
//     }
//     return 0;
// }
        // for(auto i:arr){
        //     ll numc=0, prev=-1;
        //     for(ll j=1;j<=n;j++){
        //         if(arr.find(j)!=arr.end() && j!=i){
        //             numc++;
        //             prev=j;
        //         }
        //         if(prev>=1 && (j-prev)>=d){
        //             numc++;
        //         }
        //     }
        //     if(mn==numc) {same++;continue;}
        //     mn=min(mn,numc); 
        //     if(mn==numc) {same=1;}
        // }