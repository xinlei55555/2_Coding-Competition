
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << x << endl;
struct Cows{
	long long val,x,y;
};
int main(){
	long long i,n; cin >> n;
	//unsure how to declare
	//Cows cow =  new Cows;


//no way this works!!!
	vector<Cows> arr (n);
	for(i=0;i<n;i++){
		cin >> arr[i].val >> arr[i].x >> arr[i].y;
    }
	
	return 0;
}
