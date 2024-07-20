// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define debug(x) cerr << #x << " " << x << "\n";
// #define MAXN 101
// #define MAXINT 1000001

// ll arr[MAXN];
// vector<ll> vals;
// ll recurse(ll n)
// {
//     /*
//     Return the minimum number of coins needed to get that number
//     */
//     ll tmp=MAXINT;
//     // check if in vals
//     if (arr[n] != 0) return 1;

//     // go through all the coins and check the minimum value for the previous step
//     for (int i = 0; i < vals.size(); i++)
//     {
//         if (arr[n - vals[i]] > 0)
//         {
//             tmp = min(tmp, arr[n - vals[i]] + 1);
//         }
//         else if(arr[n-vals[i]] == 0)
//         {
//             ll val = recurse(n - vals[i]);
//             if (val == -1) continue;
//             arr[n - vals[i]] = val;
//             tmp = min(tmp, arr[n - vals[i]] + 1);
//         }
//     }
//     if (tmp == MAXINT){
//         return -1;
//     }
//     return tmp;
// }

// int main()
// {
//     ll n, t;
//     memset(arr, 0, sizeof(arr));

//     cin >> n >> t;
//     ll a;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a;
//         vals.push_back(a);
//         arr[a] += 1;
//     }
//     // then check for each element in the vector what is the minimum to get to the given value
//     a = recurse(t);
//     cout << a << "\n";
//     return 0;
// }
//! NOTE: Recursion is slower than looping
// so here, it's faster to loop through all the sums
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
void setIO(string name = "") {  // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(0);
	cin.tie(0);  // see Fast Input & Output
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin);  // see Input & Output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

ll dp[1000001];

const int MOD = (int)1e9 + 7;

int main() {
	int n, x;
	cin >> n >> x;
	vi coins(n);
	for (int i = 0; i < n; i++) { cin >> coins[i]; }
	for (int i = 0; i <= x; i++) { dp[i] = INT_MAX; }
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int weight = 0; weight <= x; weight++) {
			if (weight - coins[i - 1] >= 0) {
				dp[weight] = min(dp[weight], dp[weight - coins[i - 1]] + 1);
			}
		}
	}
	cout << (dp[x] == INT_MAX ? -1 : dp[x]) << '\n';
}