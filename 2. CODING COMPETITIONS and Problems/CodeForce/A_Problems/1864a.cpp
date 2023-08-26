#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x, y, n;
        cin>>x>>y>>n;
        int a[n];
        // a[0]=x;
        a[n-1]=y;
        int h=1;
        for(int i=n-2;i>=0;i--){
            a[i]=(a[i+1]-h);
            h++;
        }
        if(x>a[0])cout<<"-1\n"; 
        else {
            cout<<x<<" ";
            for(int i=1;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}