#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr << #x << " " << x << "\n";
#define MOD 1000000007
#define MAX 1000001

// map<ll, ll> memory = {{1, 1}};
// instead use an array to store, and directly check, because .count() for a map takes O(n)
ll DP[MAX];

ll recurse(int n)
{
    /*
    Returns the number of ways to
    */
    ll total = 0;
    if (n <= 6){
        total += 1; // can just get the number itself.
    }
    for (ll i = 1; i <= 6; i++)
    {
        if (n - i > 0){
            if (DP[n-i] != 0){
                total += DP[n-i];
            }
            else{
                DP[n-i] = recurse(n - i) % MOD;
                total += DP[n-i];
            }
        }
    }
    return total;
}

int main()
{
    // set everything to be 0
    memset(DP, 0, sizeof(DP));
    // base case
    // memory[1]=1;
    DP[0] = 1;
    ll n;
    cin >> n;
    cout<<recurse(n) % MOD;
    
    return 0;
}