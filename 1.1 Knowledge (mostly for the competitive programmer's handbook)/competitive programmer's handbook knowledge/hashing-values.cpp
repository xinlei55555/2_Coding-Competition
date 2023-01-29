//!this website is used for hashing;
//https://dev.to/muiz6/string-hashing-in-c-1np3
//!https://iq.opengenus.org/std-hash-cpp/#:~:text=String%20hashing.%20To%20hash%20a%20string%20in%20C%2B%2B%2C,how%20string%20hashing%20can%20be%20achieved%20in%20C%2B%2B.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    hash<char> hash_string;
    string s="sdhflahdfl";
    hash_string=hash_string(s);
    return 0;
}