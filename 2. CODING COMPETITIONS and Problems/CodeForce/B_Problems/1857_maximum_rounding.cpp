#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x)  cerr<<#x<<" "<<x<<"\n";
//better solution
    //loop from behind, and everytime something is bigger than 5, add one to the previous.
    //then, if the FIRST digit it larger than 5, just print the answer, but add the value '1' before the rest
int main(){
    int t; cin>>t;
    while(t--){
        debug("HI")
        string s; cin>>s;
        //!somehow, do not define int n=s.size() and use n everywhere, cuz that can cause error.
        int idx=-1;
        debug(s.size())
        //just i, means that i will stop at 0, but EXCLUDE 0, because 0=false;
        for(int i=s.size()-1; i;i--){
            //i just use the character value of the integers, which are also correct.
            if(s[i] >= '5'){
                idx=i;
                s[i-1]++;
            }
        }
        //then I need to treat the i-th index separately
        if(s[0]>='5'){
            cout<<'1';
            idx=0;
        }
        debug(s.size())
        //then, print all 0s for all the integers that came after the last integer that was rounded
        for(int i=idx;i<s.size();i++) s[i]='0';
        
        cout<<s<<"\n";
    }
    return 0;
}

// vector<char> answer; bool rounded;
// vector<char> digits = {'0','1','2','3','4','5','6','7','8','9'};
// void check(ll idx, bool increase){
//     if(increase) {
    
//         if(idx==(-1)) {answer.insert(answer.begin(), '1');}//answer = '1'+answer; }

//         if(answer[idx]=='9') {answer[idx]='0'; check(idx-1, increase=true);}
//         answer[idx]=((digits[(answer[idx]-'0')+1]));
//     }
//     if(answer[idx]-'0'>=5){     
//         // answer[idx] = '0';
//         rounded=true;
//         debug(answer)
//         debug(idx)
//         debug(size(answer))
//         for(int i=idx;i<answer.size();i++){answer[i]='0';}
//         debug(answer)
//         check(idx-1, increase=true);
//     }
// }
// int main(){
//     string T; int t; //cin>>t;
    
//     getline(cin, T);
//     t=stoi(T);
//     while(t--){
//         // cin>>answer;
//         // cin>>answer;
//         //use getline so you don' get runtime error
//         answer.clear();
//         string hi;
//         //!BRUH BRUH BRUH, I got a runtime error, because I was overflowing the size of a string, so better use vector of char!!!!!!
//         getline(cin, hi);
//         for(char x: hi) answer.push_back(x);
//         debug("HI")
//         rounded=false;
//         for(int i=0;i<answer.size();i++){
//             if(rounded) break;
//             check(i, false);
//         }
        
//         for(auto x: answer) cout<<x;
//         cout<<"\n";
//     }
//     return 0;
// }