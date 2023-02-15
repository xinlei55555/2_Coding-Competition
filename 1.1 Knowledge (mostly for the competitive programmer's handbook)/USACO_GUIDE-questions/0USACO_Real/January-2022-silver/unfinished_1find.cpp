#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll t, i;
    cin>>t;
    while(t--){
        string s, o;
        ll ans=0;
        unordered_map<char, char> diff;
        unordered_map<char, char> op;
        cin>>s>>o;
        bool id=true;
        for(i=0;i<s.size();i++){
            debug(i)
            //check for cycles;
                //! I should record the previous times where it didn't work:
                //example test case:
                    //aaaaabbbbbccccc
                    //bbbbbaaaaappppp //outputs 8, shouldn't!, should be 4
                //!1 aaaaabbbbbccccc bbbbbaaaaappppp
                    //this somehow doesn't work too!
            //ANSWER : DO MORE TEST CASES TT BRUH BRUH BRUH
            

            if (diff.find(o[i])!=diff.end()&&(op.find(s[i])==op.end()||op[s[i]]!=o[i])) {ans++;s[i]=o[i];}

            if(diff.find(s[i])!=diff.end() && diff.find(s[i])->second!=o[i]) {cout<<"-1\n"; id=false; break;}

            if(s[i]==o[i]) {
                if(diff.find(s[i])!=diff.end()){cout<<"-1\n"; id=false; break;}
                else continue;
            }
            if(diff.find(s[i])==diff.end()){
                ans++;
                diff[s[i]]=o[i];
                
            }
            
            

        }
        if(id) cout<<ans<<"\n";
    }
    return 0;
}

//!since we are looking at the minimums, we can assume that it is useless to change a sequence of letters to something else than what we wanted to change it.
// int main(){
//     ll t,i;
//     string s,o;
//     cin>>t;
//     while(t--){
//         unordered_map<char, char> diff, opp;
//         diff.clear();
//         opp.clear();
//         bool id=true;
//         set<char> no_change;
//         ll ans=0;
//         cin>>s>>o;
//         //just look at differences   
//         for(i=0;i<s.size();i++){
//             if(s[i]==o[i]) {
//                 no_change.insert(s[i]);
//                 //impossible case
//                 if(diff.find(s[i])!=diff.end()) {cout<<"-1\n"; id=false; break;}
//                 else continue;
//             }
//             else{
//                 //if something appears for something else
//                 if(diff.find(o[i])!=diff.end()) ans++;
//                 // if(cycle(s[i], o[i], true)) {ans++;debug("HI")}
//                 //if that elements has not appeared yet, new element has appeared.
//                 if(diff.find(s[i])==diff.end()) { 
//                     //wait, you gotta loop to check if there is a cycle TT
//                     //opposite
//                     opp[o[i]]=s[i];
//                     diff[s[i]]=o[i];
//                     ans++;
//                 }
//                 if(no_change.find(s[i])!=no_change.end()) {cout<<"-1\n"; id=false; break;}
//                 if(diff.find(s[i])!=diff.end()) {if(diff.find(s[i])->second!=o[i]) {cout<<"-1\n"; id=false; break;}}

                
//                 // if element appears, but with a different change, then impossible too.
//                 //the thing has been previously found, in reverse order...
//                     // if(opp.find(s[i])!=opp.end()) {if(opp.find(s[i])->second==o[i]) ans++;}
                
             
//             }
//         }
//         if(id) cout << ans << "\n";

//     }
//     return 0;
// }

// bool cycle(char c, char first, bool id){
//     if(visited.find(c)!=visited.end()) return false;

//     visited.insert(c);
//     debug(first)
//     debug(c)
//     if(id) {if(opp.find(c)!=opp.end()) {
        
//         if(opp.find(c)->second==first) return true;
//         else cycle(opp.find(c)->second, first, false);
//     }}
//     if(!id){
//         if(diff.find(c)!=diff.end()){
//         if(diff.find(c)->second==first) return true;
//         else cycle(diff.find(c)->second, first, true);
//     }}
//     return false;
// }