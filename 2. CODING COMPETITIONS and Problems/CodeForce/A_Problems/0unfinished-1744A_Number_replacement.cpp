#include <bits/stdc++.h>
using namespace std;
//!ok, this is me, in november, just gonna use an unordered map
unordered_map<int, char> mp;
int a,b,i,j,arr[51];
;
string c, ans="YES";

main(){
    cin>>a;
    for(i=0; i<a; i++){
        cin>>b;
        for(j=0; j<b; j++)cin>>arr[j];
        cin>>c;
        for(j=0; j<b; j++){
            if(mp.find(arr[j])!=mp.end()){
                if(mp[arr[j]]!=c[j]){ans="NO"; break;}
            }
            else{
                mp.insert({arr[j],c[j]});
            }
        }
        mp.clear();
        cout<<ans<<"\n";
        ans="YES";
    }
}
// int main(){
//     string s="salkjflkdsajf";
//     i=0; 
//     while(i--)
// }

    // string s;
    // vector<int> arr;

// //! another faster method would be to loop through all the number, from 1 to 50, and make sure that, if the number appears, that it doesn't appear under two different letters.
// string recurs(int j){
//     auto hi = find(arr.begin(), arr.end(), j);
//     if(hi!=arr.end()){
//         int l=hi-arr.begin();
//         for(int k=l+1; k<arr.size(); k++){
//             if(arr[k]=j&&s[k]!=s[l]) return "NO";
//         }
//         return "YES";
//     }
// }
// int main(){
//     int n, t,val;
//     cin>>t;
//     char s;
//     for(int i=0; i<t; i++){
//         cin>>n;
//         for(int j=0; j<n; j++){
//             cin>>val;
//             arr.push_back(val);
//         }
        // cin>>s;
//         for(int j=0; j<=50; j++){
// //             if(recurs(j)=="NO"){ cout<<"NO"; break;}
// //             else if(recurs(50)=="YES") cout<<"YES";
// //         }
// //     }
// //     return 0;
// // }

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int n, t, val;
//     vector<int> arr;
//     string s;
//     cin>>n;
//     bool tmp=false;
//     for(int i=0; i<n; i++){
//         cin>>t;
//         for(int j=0; j<t; j++){
//             cin>>val;
//             arr.push_back(val);
//         }
//         cin>>s;
//         for(int j=0; j<t; j++){
//             cout<<count(arr.begin(), arr.end(), arr[j])<<"\n";
//             if(count(arr.begin(), arr.end(), arr[j])==1) continue;
//             else if(j+1<s.size()){
//                 for(int k=j+1; k<arr.size(); k++){
//                     if(arr[k]==arr[j]&&s[k]!=s[j]){tmp=true; cout<<"NO";break;}
//                 }
//                 if(tmp==true) break;

//             }
            
//         }
//         cout<<tmp;
//         if(tmp==true){tmp=false;}
//         else cout<<"YES";
//     }
    
//     return 0;
// }

// //!argh, I feel like the recursive way of proceeding sucks....
// int arr[50];
// string s;
// int idx;


// bool recurs(int idx){
//     if(idx==0){
//         return false;   
//     }
    
//     else{

//         recurs(idx-1);
//     }

// }
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int n,t,val;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cin>>t;
//         for(int j=0; j<t; j++){
//             cin>>val;
//             arr[j]=val;
//         }
//         //i'll check for every element, if it is true, using recursion hehe, cuz yea, why not
//         for(int j=t-1; j==0; j--){
//             if(recurs(j)) cout<<"NO";
//             else if (recurs(j)==false) cout<<"YES";
//         }
        
//     }
//     return 0;
// }