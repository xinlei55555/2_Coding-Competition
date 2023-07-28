//!this is how to define a structure, and to input values.
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << x<< endl;
struct Cows{
	long long x,y;
    string val;
};
int main(){
	long long i,n; cin >> n;
	//unsure how to declare
	//Cows cow =  new Cows;


//no way this works!!! (~this only worked if val was a long long too, not a string.)
    //!just put the size, not the elements !!!
	vector<Cows> arr (n) ;//~ (n, {"0",0,0});
    
	for(i=0;i<n;i++){
		cin >> arr[i].val >> arr[i].x >> arr[i].y;
	}
	
	for(Cows cow: arr) {
		debug(cow.val)
		debug(cow.x)
		debug(cow.y)
		
	
	}
	
	
	return 0;
}




//! a better way would be to use what chatgpt proposes