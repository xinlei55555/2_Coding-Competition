#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
typedef long long ll;

int main(){
    ll n, m,k;
    cin>>n>>m>>k;
    ll arr[n], arr2[m];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    //define your variables well!
    for(int j=0;j<m;j++) cin>>arr2[j];
    
    sort(arr, arr+n), sort(arr2, arr2+m);

    //sliding window
    int i=0, ans=0;
    int j=0;
    while(i<n && j<m){
        if(abs(arr[i] - arr2[j])<=k){
            ans++;
            i++;
            j++;
        }
        else {
			// If the desired apartment size of the applicant is too big,
			// move the apartment pointer to the right to find a bigger one
			if (arr[i] - arr2[j] > k) {
				++j;
			}
			// If the desired apartment size is too small,
			// skip that applicant and move to the next person
			else {
				++i;
			}
		}
    }
    cout<<ans;
    return 0;
}