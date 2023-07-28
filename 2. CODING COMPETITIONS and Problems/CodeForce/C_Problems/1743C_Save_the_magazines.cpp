#include <iostream>
//including iostream instead of bits.stdc++.h is better for speed

using namespace std;

int main(){
  //they declared a long long
  //always declare the right size, which is the maximum. Here, it was 2x10^5
  int t, n, arr[200001],temp,ans;
  string s;
  for(cin>>t; t--;){
    ans=0;
    temp=0;
    cin>>n>>s;
    // for(int i=0; i<n; i++) cin>>arr[
    for(int i=0; i<n; i++){
      cin>>arr[i];
      if(s[i]=='0'){
        temp=arr[i];
      }
      else{
        //ans+=max(temp, arr[i]);
        //wrong, since temp=0, because sometimes, we DONT add the temp
        //temp=0;
        if(temp>arr[i]){
          ans+=temp;
          //i add the arr[i] as the new temp, since it lost its own protection
          temp=arr[i];
        }
        else{
          ans+=arr[i];
        }
      }
    }
    cout<<ans<<"\n";
  }

  return 0;
}
/*
!someone else's solution
*he basically, kept the last value that could have been saved, in a variable (so 0)
*then, when a new 0 appears, he removes the old 0 value, and changes it with the current 0 value
*Then, if a value at 1 appears, and is smaller than the 0 value, he changes.
*if not, he continues
    ~ his approach was centered around what we asked (the sum), while he DID NOT try to compute what would be the configuration of the lids.
#include<bits/stdc++.h>
using namespace std;
long long t,n,ans,sl[2000005],ma;
string s;
int main(){
	cin>>t;
	while(t--){
	cin>>n;
	cin>>s;
for(int i=1;i<=n;++i)cin>>sl[i];
ans=0;
ma=0;
for(int i=1;i<=n;++i){
	if(s[i-1]=='0')ma=sl[i];
	else{
		if(sl[i]<ma){
			ans+=ma;
        !I believe he decided to switch the values of the BOXES themselves, instead of switching the value of the covers
			ma=sl[i];
		}
		else ans+=sl[i];
	}
}
cout<<ans<<endl;
} }*/


// main(){
//     int t, n, a;
//     string s;
//     for(cin>>t; t--;){
//         //always declare values for ans at the beginning
//         //the following two could have been cin>>n>>s;
//         // cin>>n;
//         // cin>>s;
//         cin>>n>>s;
//         int arr[n],ans=0;
//         for(int i=0; i<n; i++) cin>>arr[i]; //{cin>>a; arr[i]=a;}
//         // for(auto x:arr) cerr<<x;
//         int i=1, tmp=-1;
//         while(i<n){
//             if(arr[i-1]>=arr[i] &&s[i-1]=='0'&&s[i]=='1') swap(s[i-1], s[i]);
            
//             else if(s[i-1]=='0'&&s[i]=='1'&&s[i+1]=='0'){
//                 if(arr[i-1]>=(arr[i])) {
//                     swap(s[i-1], s[i]);
//                 }
//             }
//             else if(s[i-1]=='0'&& s[i]=='1' && s[i+1]=='1' ){
//                 tmp=i-1;

//             }
//             else if(s[i-1]=='1'&&s[i]=='1'&&(s[i+1]=='0'||i+1==n)){
//                 if(tmp!=-1 && arr[tmp]>=arr[i]){
//                     swap(s[tmp],s[i]);
//                 }
//             }
//             i++;
        // }
        //~first solution... (wrong)
      /**/  // for(int i=1; i<s.size(); i++) {
        //     if(s[i]=='1') {
        //         if(s[i+1]=='1'){
                    
        //         }
        //         else{
        //             if(arr[i-1]>=arr[i]){
        //                 swap(s[i-1],s[i]);
        //             }
        //         }
        //     }*/

        
//                        // cerr<<"hey"<<num<<"\n";
//         for(int i=0; i<n; i++){if(s[i]=='1'){ans+=arr[i];}}
//         // cerr<<"HI";
//         // cout<<s;
//         cout<<ans<<"\n";

//     }
// }