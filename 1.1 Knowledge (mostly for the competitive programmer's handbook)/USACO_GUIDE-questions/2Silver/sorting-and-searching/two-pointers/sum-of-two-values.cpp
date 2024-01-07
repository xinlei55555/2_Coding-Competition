// //https://cses.fi/problemset/task/1640
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n, x;
// 	cin >> n >> x;

// 	vector<int> values(n);
// 	for (int i = 0; i < n; i++) { cin >> values[i]; }

// 	// use a map to avoid using a very large array
// 	map<int, int> val_to_ind;
// 	for (int i = 0; i < n; i++) {
// 		// target minus a number is the other number
// 		if (val_to_ind.count(x - values[i])) {
// 			cout << i + 1 << " " << val_to_ind[x - values[i]] << endl;
// 			return 0;
// 		}
// 		val_to_ind[values[i]] = i + 1;
// 	}

// 	cout << "IMPOSSIBLE" << endl;
// }








#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<"\n";

int main(){
    ll a, b;
    cin>>a>>b;
    //maps are faster for insert and remove elements!!!!! since it is ordered. Hence, if you are inserting stuff, better use maps.
    map<ll, ll> values;  vector<ll> arr(a, 0);  
    for(int i=0;i<a;i++){
        cin>>arr[i];
        //aaa, it cannot be the same value twice
    }
    //!ok this is really interesting. Right now, I am beyond time complexity, because I append each element to the map immediately. Instad, I could add the elements as we go.
        //this would take care of the multiple solutiosn!
    //I am not sure how to check if a value exists in an unordered map...
    for(int i=0;i<a;i++) {
        // if(values.count(arr[i])){
        if (values.find(arr[i])!=values.end() and values[arr[i]]!=i) {
            cout<<values[arr[i]]+1<<" "<<i+1<<"\n";return 0;
        }
        else{
            values[b-arr[i]]=i;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}