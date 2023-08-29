#include <iostream>
using namespace std;
//the answer can never be bigger than 0, since if there are police officers, they will be lost
main(){int ans=0, a, n, p=0; for(cin>>n; n--;) {(cin>>a); if(a>0){p+=a;}else{if(p>0)p--; else ans++;} }cout<<abs(ans);}
