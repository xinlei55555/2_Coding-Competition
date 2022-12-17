#include <bits/stdc++.h>

using namespace std;
int main(){
    ifstream cin("herding.in");
    ofstream cout("herding.out");
 
    //i'll keep the biggest and the smallest gaps
    int arr[3],i,mx,mn, diff1, diff2;
    for(i=0;i<3;i++){
        cin>>arr[i];
    }    
        //getting the smallest and biggest gaps
    diff1=abs(arr[0]-arr[1]);
    diff2=abs(arr[1]-arr[2]);

    mn=min(diff1, diff2);
    mx=max(diff1,diff2);      
    //for(auto x:arr)cout<<x<<"\n";

    /*
	 * The minimum number of moves can only be 0, 1, or 2.
	 * 0 is if they're already consecutive,
	 * 1 is if there's a difference of 2 between any 2 numbers,
	 * and 2 is for all other cases.
	 */
	if (arr[0] == arr[2] - 2) {
		cout << 0 << endl;
	} else if ((arr[1] == arr[2] - 2) || (arr[0] == arr[1] - 2)) {
		cout << 1 << endl;
	} else {
		cout << 2 << endl;
	}
     //!not the log base 2, in fact, there is a faster way!   cout<<ceil(log(mn)/log(2))<<"\n";

        //max: second biggets gap-1 (the biggest gap is between the largest values, but I can't change that)
        cout<<mx-1;

    return 0;
}