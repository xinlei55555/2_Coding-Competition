#include <bits/stdc++.h>
using namespace std;

main(){
    int t, n;
    for(cin>>t; t--;){
        cin>>n;
        int arr[n];
        arr[0]=1;
        arr[n-1]=2;
        for(int i=1; i<n-1; i++) arr[i]=(i+2);
        for(auto x: arr) cout<<x<<"\n";
    }
}