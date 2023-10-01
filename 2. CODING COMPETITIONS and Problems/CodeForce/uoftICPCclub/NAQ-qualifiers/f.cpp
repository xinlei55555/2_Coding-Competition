#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    string s;
    cin>>s;
    unordered_set<char> vowels = {'a', 'e', 'o', 'i', 'u'};
    // unordered_set<char> vowels_y = {'y', 'a', 'e', 'o', 'i', 'u'}
    ll ans1=0, ans2=0;
    for(int i=0;i<s.size();i++){
        if(vowels.find(s[i]) != vowels.end()) ans1++;
        if(s[i] == 'y') ans2++;
    }
    cout<<ans1<<" "<<ans1+ans2;
    return 0;
}