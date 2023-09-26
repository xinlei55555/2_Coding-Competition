#include <bits/stdc++.h>
using namespace std;
#define INF 1000001
int main(){
    int n, mx=INF, l;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l;
        // cerr<<l<<"\n";
        l=abs(l);
        mx=min(mx, l);
        } 
    cout<<mx<<"\n";

    return 0;
}
