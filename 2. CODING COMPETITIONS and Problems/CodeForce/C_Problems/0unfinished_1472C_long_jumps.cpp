#include <bits/stdc++.h>
using namespace std;

int main(){
    //i'll create two parallel array, one with the score that it getes from each, and one with the actual values
    int t,n,a[200001],rans,ans; 
    bool b[200001];
    for(cin>>t; t--;){
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        int i, j=0;
        while(j<n){
            i=j;
            ans=a[j];        
            while(i<n){
                ans+=a[i];
                i+=a[i];
            }
            rans=max(ans, rans);
            j++;
        }
        cout<<rans<<"\n";
    }
    return 0;
}