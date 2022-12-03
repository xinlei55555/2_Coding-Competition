#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int n, c;
    for(cin>>n; n--;) {cin>>c;a.push_back(c);}
    sort(a.begin(), a.end());
    for(auto x:a) cout<<x<<" "; 
    return 0;
}