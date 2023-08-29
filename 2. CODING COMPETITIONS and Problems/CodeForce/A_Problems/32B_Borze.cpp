#include <bits/stdc++.h>

using namespace std;

main(){
    string s; 
    cin>>s;
    int n=0;
    while(n<s.size()){
        // cout<<n;
        //here, I am calling the element at index n, AND adding one at the same time
            //the only problem is that n++ will also affect the n that is afterwards. (that is in the same if else condition, this is why I placed n+=2 AFTER n++)  
        
        //lesson: read well the quetsion.
        if(s[n]=='.') {cout<<"0"; n++;}
        else if(s[n]=='-'&&s[n+1]=='-') {cout<<"2"; n+=2; }
        else if(s[n]=='-'&&s[n+1]=='.'){cout<<"1"; n+=2;}
    }
    

}