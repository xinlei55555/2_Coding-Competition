#include <bits/stdc++.h>
using namespace std;
#define INF 1000000001
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;double mx=INF, a,b;
        for(int i=0;i<n;i++) {cin>>a>>b;mx = min(mx,a+floor((b-1)/2));} 
        cout<<mx<<"\n";
    }
}