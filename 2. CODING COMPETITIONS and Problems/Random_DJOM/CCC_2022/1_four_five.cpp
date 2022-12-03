#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
int main(){
    int n,ans=0;
    //lesson 1: I cannot use n-=4 in a for loop like such.
    cin>>n;
    if(n%4==0)ans++;
    for(int i=0; i<n; i+=4){
        if((n-i)%5==0) ans++;
    }
    cout<<ans;
    return 0;
}
#include <bits/stdc++.h>T