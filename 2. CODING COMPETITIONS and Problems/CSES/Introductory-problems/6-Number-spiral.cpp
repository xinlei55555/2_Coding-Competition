#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//!check well your code in the first place!
    //we are looking for if it is odd or even, and then, we may check which side we wanna use
int main(){
	int t=1;
	cin>>t;
	while(t--){
		ll x,y; cin>>x>>y;
		
		if(x>=y){
			if((x&1)==0) cout<<x*x-y+1<<"\n";
			else cout<<(x-1)*(x-1)+y<<"\n";
		}
		else{
			if((y&1)==1) cout<<y*y-x+1<<"\n";
			else cout<<(y-1)*(y-1)+x<<"\n";
		}
	}
 
	return 0;
}
 
// int main(){
//     long long a,b,n,i;
//     cin>>n;
//     while(n--){
//         cin>>a>>b;
//         //I added this extra step, in order to conver the double value into an int.
//         //!idk why i used pow, instead of multiplying twice, but it seems like the latter is more precise
//             //*random note: if you do (x&1), and it is true (1), then this means that the number's last bitwise digit is 1, and that it is odd.

//         //fixed helps me print the WHOLE number (not just in exp. notation)
//         cout<<fixed<<max(a,b)*max(a,b)-(min(a,b)-1)<<"\n";
//     }
    
//     return 0;
// }