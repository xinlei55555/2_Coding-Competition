#include <bits/stdc++.h>
using namespace std;

main(){
    int t, a, b; 
    for(cin>>t; t--;){
        cin>>a>>b;
        // if (2*a==b||a==2*b) cout<<pow(min(a,b), 2)<<"\n";
       if(2*min(a,b)>max(a,b)) cout<<pow(2*(min(a,b)),2)<<"\n";
       else  cout<<pow((max(a,b)),2)<<"\n";
    }
}