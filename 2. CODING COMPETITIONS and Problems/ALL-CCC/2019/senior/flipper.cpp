#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    int arr[2][2]={{1,2},{3,4}};
    string s; cin>>s;
    ll v=0, h=0;
    for(char a:s){
       if(a=='H') h++;
       else v++;
    }    
    if(h%2==1){
        swap(arr[0], arr[1]);
    }
    if(v%2==1){
        swap(arr[0][1], arr[0][0]);
        swap(arr[1][0], arr[1][1]);
    }
    for(auto x:arr[0]) cout<<x<<" ";
    cout<<"\n";
    for(auto x:arr[1]) cout<<x<<" ";
    return 0;
}