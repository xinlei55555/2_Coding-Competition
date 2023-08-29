#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll arr[6]={0}, miny, minx;
        for(int i=0;i<6;i++){
            cin>>miny;
            arr[i]=miny;
        }
        
        bool noty = false, notx = false;
        miny=min(abs(arr[1]-arr[3]), abs(arr[1]-arr[5]));
        minx=min(abs(arr[0]-arr[2]), abs(arr[0]-arr[4]));
        debug(abs(arr[0]-arr[2]))
        debug(arr[0])
        debug(arr[2])
        if((arr[1]-arr[3])*(arr[1]-arr[5])<0){
            noty = true;
        }
        if((arr[0]-arr[2])*(arr[0]-arr[4])<0){
            notx = true;
        }
        debug(notx)
        debug(noty)
        if(noty && notx){
            cout<<1;
        }
        if(noty && !notx){
            cout<<minx+1;
        }
        if(notx && ! noty){
            cout<<miny+1;
        }
        if(!notx && !noty) {
            debug(minx)
            debug(miny)
            if((miny==abs(arr[1]-arr[3]) && minx ==abs(arr[0]-arr[2])) || (miny==abs(arr[1]-arr[5]) && minx ==abs(arr[0]-arr[4]))){
                cout<<miny+minx+1;
            }
            else cout<<max(miny, minx)+1;
        }

        // else{
        //     cout<<miny+minx+1;
        // }
        cout<<"\n";
    }
    return 0;
}