#include <iostream>

using namespace std;
int main(){
    int n,ans=0, i=1;
    char s, p;
    cin>>n;
    cin>>p;
    for(i; i<n; i++){cin>>s;if(s==p) {ans++;}p=s; }
    cout<<ans;
}