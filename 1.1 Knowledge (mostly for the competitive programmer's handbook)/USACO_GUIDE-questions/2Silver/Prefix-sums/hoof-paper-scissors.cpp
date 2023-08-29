#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<": "<<x<<"\n";
int main(){
    ifstream cin("hps.in");
    ofstream cout("hps.out");

    long long i,n; cin>>n;
    //h beats s, s beats p, p beats h;
        //!important, when defining an empty array, always define it so that EVERY elements has a value!!!!!
    long long p[n]={0}, h[n]={0}, s[n]={0};
    char arr[n];

    

    cin>>arr[0];
    if(arr[0]=='P')p[0]++;
    else if(arr[0]=='S')s[0]++;
    else h[0]++;

    for(i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]=='P') p[i]++;
        else if(arr[i]=='S') s[i]++;
        else h[i]++;

        p[i]+=p[i-1];
        h[i]+=h[i-1];
        s[i]+=s[i-1];

    }   
    //then, they just try for every one of the indexes, the combination to find the maximum answer
        //the before wins represents the elements out of the three arrays that would contain the most of a certain character.
    long long max_wins = 0;
	for (i = 0; i < n; i++) {

		long long before_wins = max({h[i], p[i], s[i]});

		long long after_wins = max({
            //this formula determines the number of p, s, and h left in the whole array
			h[n-1] - h[i],
			p[n-1] - p[i],
			s[n-1] - s[i]
		});

		max_wins = max(max_wins, before_wins + after_wins);

	}
    cout<<max_wins;

    return 0;
}