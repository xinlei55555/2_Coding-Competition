#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<int> a={1,2}, b={3};
    cerr<<(n+1)%4<<endl;
    if((n+1)%4==0) {
        for(int i=4; i<n; i+=4){
            a.insert({i, i+3});
            b.insert({i+1, i+2});
        }
    cout<<"YES\n";
    cout<<a.size()<<"\n";
    for(auto x: a) cout<<x<<" ";
    cout<<"\n";
    cout<<b.size()<<"\n";
    for(auto x:b) cout<<x<<" ";

    //pour 11, ca serait 
    // 1 2    4    7    8      11
    //    3     5 6       9 10
    return 0;}
    else{cout<<"NO"; return 0;}
}