#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n,i;
    cin>>n;
    //I'll leave two blank spaces, which will count as placeholders for the birds that fly off.
    int lines[n+2]={0};
    for(i=1;i<=n;i++)cin>>lines[i];
    cin>>m;
    int a,b;
    while(m--){
        cin>>a>>b;
        lines[a+1]+=lines[a]-b;
        lines[a]=0;
        lines[a-1]+=(b-1);
    } 
    for(i=1; i<=n; i++) cout<<lines[i]<<"\n";
    return 0;
}