#include <bits/stdc++.h>
using namespace std;

//*Solution found online: 
    //1. Leading zeroes are useless and can be dropped
//*One of the two substrings will be equal to s (i figured that out)
    //since the value of s is largest possible, while the other value will come and complement what is lacking

//*it is also always optimal to change the first 0 into a 1
    //*THUS, you should just start looping from the first 0, and the SIZE of the other substring will simply be the size of s2 until the last elemen of the string
int main(){
    int n, m, val, ma;
    string s, s1;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        for(int i)
    }
return 0;
}
//~then, just brute force lmao
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, val, ma;
//     string s, s1; 
//     cin>>n>>s;
//     //brute forcing time, AAAA, it won't work, since the size of the possible inserted array varies.
//     for(int i=0; i<n; i++){
//         //I try all the possible combinations.
//         // for(int k=0; k<i; k++){

//         // }
//         //!here, I reset the array string everyt ime
//         ans
//         for(int j=i; j<ans.size(); j++){
//             ans[max(j,i)]
//         }
//     }
//     // for(auto x: s) {
//     //     val=0;
//     //     if (x=='1'){ 
//     //         //i'll just look for the longest substring of 1s
//     //         val++;
//     //         ma=max(val, ma);
//     //     }
//         //i can look for any value 1 or 0
//     }
//     return 0;
// }
