#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<x<<endl;
int main(){
    int n,b;cin>>n;
    char a[102]={0};

    while(n--){
        int t;cin>>t;
        b=0;
        for(int i=0;i<t;i++){
            cin>>a[i];
            
            //debug(b)
            if(i==0) {b=a[i]-'0';}
            else if(b>0) {b-=a[i]-'0';cout<<'-';}
            else {b+=a[i]-'0';cout<<'+';}
        }
        cout<<"\n";
    }
    return 0;
}