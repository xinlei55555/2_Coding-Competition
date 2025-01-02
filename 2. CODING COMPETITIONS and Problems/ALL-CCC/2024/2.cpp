#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    int n, k; char a;
    string s;
    cin>>n>>k;
    set<char> present;
    set<char> is_double;
    for (int i=0;i<n;i++){
        present.clear();
        is_double.clear(); // always clear everything from previous test cases.
        cin>> s;
        for(char a: s){
            if (present.find(a) == present.end()){
                present.insert(a);
            }
            else{
                is_double.insert(a);
            }
        }
        bool previous = (is_double.find(s[0]) != is_double.end()) ? true:false;
        bool good = false;
        // debug(s)
        // for (auto a: is_double) debug(a)
        for(int j=1; j<k;j++){     
            // debug(previous)
            // debug((is_double.find(s[j]) != is_double.end()))
            // debug(s[j])
            if((is_double.find(s[j]) != is_double.end()) != previous){
                previous = !previous;
                continue;
            }
            else{
                good = true;
            }
        }
        if (not good) cout<<"T\n";
        else cout<<"F\n";

    }

    return 0;
}

// took 12 minutes