#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h, a, ans=0;
    for(cin>>n>>h; n--;){
        cin>>a;
        if(a>h)ans+=2;
        else ans++;
    }
    cout<<ans;
    return 0;
}