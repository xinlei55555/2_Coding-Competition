// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define debug(x) cerr<<#x<< " "<<x<<"\n";

// bool cmp(pair<ll, ll> a, pair<ll, ll>  b ){
//     return a.first<b.first;
// }

// int main(){
//     ll a,m, n; cin>> n>>m;
//     vector<pair<ll, ll>> tickets(n), people(m); 
//     for(int i=0;i<n;i++){
//         cin>>a;tickets[i] = {a, i};
//     }
//     for(int i=0;i<m;i++){
//         cin>>a; people[i] = {a, i};
//     }
//     sort(tickets.begin(), tickets.end(), cmp);
//     sort(people.begin(), people.end(), cmp);
//     vector<pair<ll, ll>> answer;
//     // for(auto x: tickets) debug(x.first)
//     // for(auto x: people) debug(x. first)
//     ll j = n-1, i = m-1;
//     while(i>=0 and j>=0){
//         while(j>=0){
//             if(people[i].first>=tickets[j].first){
//                 // debug(people[i].first)
//                 // debug(tickets[j].first)
//                 answer.push_back({people[i].second, tickets[j].first});
//                 j--;
//                 break;
//             }else j--;
//         }
//         i--;
//     }
//     //then loop through the rest and mak i
//     sort(answer.begin(), answer.end(), cmp);
//     // for(auto x: answer) {debug(x.second)
//     // debug(x.first)}

// //somehow this part doesn't run, but if it did... it would work. It runs when I call debug()
//     i=0, j=0;
//     while(i<m){
//         // cout<<"";
//         // debug("HI")
//         if(answer[j].first == i){
//             cout<<answer[j].second<<"\n";
//             j=answer[j+1].first; 
//         }
//         else cout<<-1<<"\n";
//         i++;
//     }
//     return 0;
// }

//correct idea above ^, except, if you wish to find the closest element smaller than a certain element, use lower_bound/upper_bounds in the sets!
#include <bits/stdc++.h>

using namespace std;

// variables used for the current problem
int n, m, h, t;
multiset<int> tickets;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> h;
		tickets.insert(h);
	}
	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {    
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}