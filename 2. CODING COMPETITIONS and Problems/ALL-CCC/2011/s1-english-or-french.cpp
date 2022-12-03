#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t=0, s=0; char c;
    cin>>n;
    //while(n--){
        while(cin>>c) {
            if(c=='t'||c=='T')t++;
            if(c=='s'||c=='s') s++;
        }
    //}
    cout<<((t<=s)?"French":"English");
    return 0;
}