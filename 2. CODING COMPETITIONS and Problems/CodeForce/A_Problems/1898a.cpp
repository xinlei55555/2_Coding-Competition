#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr<<#x<<" "<<x<<'\n';
int main(){
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<char> s;
        int b=0;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            if(c=='B') b++;
            s.push_back(c);
        }
        if(k==b) {cout<<"0\n";continue;}
        int tmp_b = 0,tmp_a=0;
        for(int i=n-1; i>=0; i--){
            if(s[i] == 'B') tmp_b++;
            if(s[i] == 'A') tmp_a++;
            if(tmp_b+i+1== k) {cout<<"1\n"<<i+1<<" B\n";break;}
            else if(tmp_a+i+1==n-k) {cout<<"1\n"<<i+1<<" A\n";break;}
        }
        // debug(b)
        // // int ans = 0;
        // if(b==k) {cout<<"0\n"; continue;}
        // // else if(k==n){ cout<<1<<"\n"<<n<<" B\n";continue;}
        // if(b<k){
        //     int diff = k-b;
        //     int i=0;
        //     while(diff>0 && i<=n){
        //         debug(diff)
        //         if(s[i] == 'A') diff --;
        //         if(s[i]=='B') diff++; 
        //         i++;
        //     }
        //     if(i>=n) cout<<"1\n"<<n<<" B\n";
        //     else cout<<"1\n"<<i<<" B\n";
        //     debug(i)
        //     continue;
        // }
        // cout<<"1\n";
        // for(int i=s.size()-1;i>=0;i--){
        //     if(s[i] == 'B') k--;
        //     if(k<0) {cout<<i+1<<" A\n"; break;}
        // }
    }

    return 0;
}