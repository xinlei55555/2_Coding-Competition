#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>m;
        if(n==m){
            cout<<"Tonya"<<endl;
        }
        //if Burenka can make the first move, so that the board becomes a nxm where n=m, he wins.
        else if((max(n,m) - min(n, m))%2==0) cout<<"Tonya"<<endl;
        else cout<<"Burenka"<<endl;
    }
        
    return 0;
}
