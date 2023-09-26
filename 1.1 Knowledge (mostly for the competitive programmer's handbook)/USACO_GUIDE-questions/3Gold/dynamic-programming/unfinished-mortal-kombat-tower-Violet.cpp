#include <bits/stdc++.h>
#define debug(x) cerr<<#x<<" "<<x<<"\n";

typedef long long ll;
using namespace std;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        //greedy approach:
        ll a[n];cin>>a[0]; ll skip=a[0], pos=1;
        //who took the last move
        bool f = true;
        for(int i=1;i<n;i++) {
            // cin>>a[i];
            // if(a[i]==1){
            //     if(pos==1){
            //         f?(pos=2, f=true, skip++):(pos=2, f=false);
            //         if(f) cout<<"skip"<<skip<<" ";
            //     }
            //     if(pos==2){
            //         (f)? (pos=2,f=false): (pos=1,f=true);
            //     }
            // }
            // //everytime boss is easy, the friend takes it 
            // else {
            //     //friend takes it if its anyone's second move.
            //     if(pos==2){
            //         f? (pos=1, f=false):(pos=2, f=true);

            //     }
            //     //I have to take it or friend has to take it, because we are at our first move
            //     else{
            //         pos=2;
            //         f=true;
            //     }
            // }
            cin>>a[i];
            //if the previous position was the second, the alternating person must take the move.
            if(pos==2){
                if(a[i]==1 && !f) {skip++;f=true; pos=1;}
                if(a[i]==1 && f){pos=1; f=false;}
                if(a[i]!=1 && f){pos=1; f=false;}
                if(a[i]!=1 && !f) {pos=1; f=true;}
                
            }
            else if(pos==1){
                if (f){
                    if(a[i]==1) {f=false; pos=1;}
                    if(a[i]!=1) {f=true; pos=2;}
                }
                if (!f){
                    if(a[i]==1) {f=false; pos=2;}
                    if(a[i]!=1) {f=true; pos=1;}
                }
                
            }
            debug(pos)
            debug(f)
        } 
        cout<<skip<<"\n";
    }
    return 0;
}


//cout<<f<<" pos"<<pos<<" ";
            // cin>>a[i];
            // if(a[i]==1){
            //     if(pos==1){
            //         f?(pos=2, f=true, skip++):(pos=2, f=false);
            //         if(f) cout<<"skip"<<skip<<" ";
            //     }
            //     if(pos==2){
            //         (f)? (pos=2,f=false): (pos=1,f=true);
            //     }
            // }
            // //everytime boss is easy, the friend takes it 
            // else {
            //     //friend takes it if its anyone's second move.
            //     if(pos==2){
            //         f? (pos=1, f=false):(pos=2, f=true);

            //     }
            //     //I have to take it or friend has to take it, because we are at our first move
            //     else{
            //         pos=2;
            //         f=true;
            //     }
            // }