#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<< " "<<x<<"\n";

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> numbers = {};
        for(int i=1;i<=n;i++){numbers.insert(i);}
        int num=n;
        for(auto i:numbers){
            cout<<i<<" ";
            int prev=i;
            while(prev*2<=n){
                cout<<prev*2<<" ";
                numbers.erase(prev*2);
                num--; prev=prev*2;
            }
            
        }
        cout<<"\n";
    }
    return 0;
}