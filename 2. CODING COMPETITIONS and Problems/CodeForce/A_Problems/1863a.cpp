#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, a, q; cin>>n>>a>>q;
        string answer = "NO\n";
        char v; int a_2=a, abs_a=a;
        for(int i=0;i<q;i++) {
            cin>>v;
            if(v=='+') {a_2++;abs_a++;}
            else{abs_a--;}
            if(abs_a>=n) answer="YES\n";
        }
        if(a_2>=n && answer!="YES\n") answer="MAYBE\n";
        if(n<=a) answer="YES\n";
        cout<<answer;
    }    
    return 0;
}