#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t; 
    while(t--){
        cin>>n;
        if(n%2!=0 ) {
            if(n==3) {cout<<"NO\n";}
            else{//(n-2)%3==0){
                cout<<"YES\n";
                for(i=0;i<n;i++){
                    cout<<(i%2==0? ((n-3)/2):-((n-3)/2+1));
                    cout<<" ";
                }
                cout<<"\n";
            }
            
        }
        
        else{
            cout<<"YES\n";
            for(i=0;i<n;i++){
                cout<<(i%2==0? "-1":"1");
                cout<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}