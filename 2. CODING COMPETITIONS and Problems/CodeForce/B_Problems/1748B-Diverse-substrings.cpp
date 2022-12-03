
#include <bits/stdc++.h>
using namespace std; 
//~square algorithm...
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t, ans,c;
	cin>>t;
	string s;
	while(t--){
		cin>>n>>s;
		ans=0;
		for(int i=0; i<n;i++){
			int arr[10]={0}, curr, mx=0, diff_num=0;
			//!this solution exceeds the time limit...
				//OMG that is because
					//!a stubstring cannot contain more than 100 numbres, without being, for sure, not diverse! (10x10)
			for(int j=i;j<n&&(j-i)<102; j++){
				c=s[j]-'0';
				if(arr[c]++==0)	diff_num++;
				curr=arr[c];
				mx=max(mx, curr);
				if(diff_num>=mx)ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
//!copied solution:
// int main(){
// 	int T, N;
// 	string s;
// 	for(cin >> T; T; T--){
// 		cin >> N >> s;
// 		int ans = 0;
// 		for(int i=0; i<N; i++){
//             !he reset the information after every loop
// 			int nums = 0, mx = 0, cnt[10] = {0};

//             !he basically also brute forced.
//                 !everytime he added a new element, he would check for the new subarray WITH the old subarray's information!!!!!
// 			for(int j=0; i+j < N; j++){
//                 !c is the integer (a char in the string) that is currently being checked.
// 				int c = s[i+j]-'0';
                
//                 ~the cnt array contains all ints from 0-9, if the integer never appeared, i add 1 to the nums, which represents the number of distincts elements.
// 				if(cnt[c] == 0)
// 					nums ++;

//                 ~I will also increment 1 for the number of times the specific element appeared.
// 				cnt[c]++;

//                 ~mx keeps track of the element from 0 to 10 which has the most repetitions
// 				mx = max(cnt[c], mx);

//                 ~then if the element with the most repetitions in that specific subarray is smaller than the nums (which is the number of distinc elements) ans++
// 				if(mx <= nums)
// 					ans++;
// 			}
// 		}
// 		cout << ans << endl;
// 	}
// }

// //!brute-force-didn't work...
// unordered_set<char> st;
// unordered_map<char, int> mp; 
// //!ok, you can't brute force this :lmao: 
//     //like, my algorithm should, in theory work, but it is running at 2^n speed ...

// //!no need to verify it separately... just verify on the spot!
// int mx, curr;
// bool real(int & mx, int curr){
// 	//instead of looping through every value, and checking if the number of elements in the sets is smaller than the number of elements repeated...
// 		//just save the value of the number with the largest numbers of repetitions! If this number CAN"T pass the test, then none will!
	
//     // for(auto &x:mp){
//     //     if(x.second>st.size()) return false;
//     // }
// 	mx=max(curr, mx);
// 	if(mx>st.size())return false;
//     return true;

// }
// int main(){
//     int t,n,i;
//     string s;
//     cin>>t;

//     while(t--){
//         cin>>n>>s;
//         int ans=n;
// 	//!ok, so here is why my algorithm is broken
// 		//! i am looping in factorial time
// 			//like, I am trying every single possible subset with 2 elementts, then with 3 elements, then wih 4, etc., while I could just try 1, 2, 3, 4, and analyze one at a time, in a same loop
//         for(int j=n-2; j>1; j++){
//             for(i=0; i<j; i++){
//                 st.insert(s[i]);
// 	//~the other solution used an array, from 0 to 10, to keep track of the elements that appeared (if the array HAS a value bigger than 0, than the value has appeared) and the array itself keeps the number of times the value appeared
//                 if (mp.find(s[i])==mp.end()){ mp.insert({s[i], 0});curr=0;}
//                 else {//mp[s[i]]++; 
// 				    //if the number of occurences of the current number is bigger than the size of the string, break
//                     if ((mp[s[i]]++)+1>s.size()) break;
// 					curr=mp[s[i]];

					
//                 }
//                 ans++;
// 		        if(real(mx, curr))ans++;

//             }
        
// 	//!additionally, the previous solution doesn't reset everything, but instead, builds the values ...
//         st.clear();
//         mp.clear();
//         }
//         cout<<ans<<"\n";
//     }
//     return 0;
// }