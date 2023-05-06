// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using vi = vector<int>;
// #define pb push_back
// #define rsz resize
// #define all(x) begin(x), end(x)
// #define sz(x) (int)(x).size()
// using pi = pair<int,int>;
// #define f first
// #define s second
// #define mp make_pair
// void setIO(string name = "") { // name is nonempty for USACO file I/O
// 	ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
// 	if(sz(name)){
// 		freopen((name+".in").c_str(), "r", stdin); // see Input & Output
// 		freopen((name+".out").c_str(), "w", stdout);
// 	}
// }


// int main() {
// 	setIO();
// 	int n; ll t; cin >> n >> t;
// 	vector<ll> k(n);
// 	for (int i = 0; i < n; i++) {
// 		cin >> k[i];
// 	}
// 	ll lo = 0; ll hi = 1e18; ll ans = 0;
// 	while (lo <= hi) {
// 		ll mid = (lo + hi) /2;
// 		ll sum = 0;
// 		for (int i = 0; i < n; i++) {
// 			sum += (mid / k[i]);
// 			if(sum >= t){ //deal with overflow
// 				break;
// 			}
// 		}
// 		if (sum >= t) {
// 			ans = mid;
// 			hi = mid-1;
// 		} else {
// 			lo = mid+1;
// 		}
// 	}
// 	cout << ans << "\n";
// }

#include <bits/stdc++.h>
using namespace std;

#define debug(x) //cerr<<#x<<" "<<x<<"\n";
typedef long long ll;

// bool check(ll val){
//     ll num_products=0;
//     for(ll x:arr){
//         num_products+=floor(val/x);
// 		debug(num_products)
//         if(num_products>=t) {return true; break;}
//     }
//     return false;
// }

int main(){
	ll n, t;
    cin>>n>>t;
	vector<ll> arr(n, 0);
    for(ll i = 0; i < n; i++){
        cin>>arr[i];
        // mx=max(arr[i], mx);
    }
    //create binary search
        //maximum time
        
    ll lo=0, hi=1e18;
    // if(n==1) {cout<<hi;return 0;}
    ll ans=0;

    // ll i=0;
    while(lo<=hi){
		//don't use the floor function with too big values
        ll mid = lo+(hi-lo)/2;
        debug(mid)
        debug(hi)
        debug(lo)

	//don't create useless function when you are not using them.
		ll num_products=t;
		for(ll i=0;i<arr.size();i++){
			num_products-=mid/arr[i];
			debug(num_products)
			if(num_products<=0) {break;}
		}

        if(num_products<=0){
            ans=mid;
            debug(ans)
            hi=mid-1;
        }
        else {
            lo=mid+1;            
        }
    }
    cout<<ans;
    return 0;
}