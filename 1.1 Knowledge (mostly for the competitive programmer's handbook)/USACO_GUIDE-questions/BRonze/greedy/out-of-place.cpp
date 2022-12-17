#include <bits/stdc++.h>
using namespace std;

int main() {
	// file input and output
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);

	// Read in the array size (n) and create the original and sorted arrays,
	// as well as the difference variable
	int n;
	cin >> n;
	int og[n];
	int sorted[n];
	int diff = 0;

	// Take in the values of the array as input,
	// and place them in both original and sorted
	for (int i = 0; i < n; i++)
	{
		cin >> og[i];
		sorted[i] = og[i];
	}

	// Actually sort the "sorted" array
	sort(sorted, sorted + n);

	// Count the number of differences in the arrays
	for (int i = 0; i < n; i++)
	{
		if (og[i] != sorted[i])
		{
			diff++;
		}
	}

	// Print 0 if there are no differences (no swaps) or
	// diff - 1 if there are differences
	cout << max(0, diff - 1);

	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define debug(x) cout<<#x<<" "<<x<<endl;
// int main(){
//     ifstream cin("outofplace.in");
//     ofstream cout("outofplace.out");

//     long long i,n; cin>>n;
//     vector<long long> arr(n,0), sorted;
    
//     //bessie is positioned at the element which is out of place, meaning the element that is larger than the next element.
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//         //detect bessie
//             //this doesn't work
//         // if(i>=1&&arr[i]<arr[i-1]){
//         //     b=arr[i];
//         //     idx=i;
//         // }
//     }
//     sorted=arr;
//     sort(sorted.begin(), sorted.end());
//     //!new new method, basically, comparing the two different arrays, and counting the number of elements that change between the 
//     set<long long> el;
//     bool once=false;
//     for(i=0;i<sorted.size();i++){
//         //the first time the elements match, it's normal, i continue. THe second time, means I finish the "runs of homozygosity", so I break
//         if((sorted[i]==b||arr[i]==b)&&once==true) break;
//         else if(sorted[i]==arr[i]&&once==false) continue;
//         else el.insert(sorted[i]);
//         once=true;
//     }
//     cout<<el.size();
// //!new method, basically, I sort the array, I find the different indexes, where bessy was before, and where she is after
//     //although this coudl mess up if there are two elements that have the same value as bessy.
//     // sorted=arr;
//     // sort(sorted.begin(), sorted.end());
//     // long long x=distance(sorted.begin(), find(sorted.begin(), sorted.end(),b));
//     // //!I know the upper and the lower bound of where the element is
//     //     //I am gonna determine the number of distinct elements in between
//     // debug(x)
//     // debug(b)
//     // set<long long> el;
//     // for(i=min(x,idx); i<max(x,idx); i++){
//     //     el.insert(sorted[i]);
//     // }
//     // cout<<el.size();
//     // //!old method
    
//     // if(b==-1) {cout<<0; return 0;}
//     // //ok, so basically, I will be looping from behind to the front, and skipping everytime there are two elements that are the smae
//     // set<long long> el;
//     // //looping from the back to the front
//     // for(i=idx-1;i!=0;i--){
//     //     if(arr[i]<=b) break;
//     //     el.insert(arr[i]);
//     // }
//     // cout<<el.size();
//     // //!this means it looped through the entire array
//     // if(el.size()==0) cout<<"HI";

//     // //looping from the front to the back
//     // set<long long> el2;
//     // for(i=idx+1;i<n-1;i++){
//     //     if(arr[i]>=b) break;
//     //     el2.insert(arr[i]);
//     // }
//     // if(el2.size()==0 &&el.size()==0){cout<<n-1;}
//     // //-1, since I will be skipping the first time I meet the value that B has
//     // // if(el.size()==0)cout<<el2.size();
//     // // else if(el2.size()==0) cout<<el.size();
//     // // else cout<<min(el2.size(),el.size());

//     return 0;
// }