#include <bits/stdc++.h>
using namespace std;
bool cmpp(){
    return "HI";
}
int main(){
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(k%2==0){vector<char> a(n);for(int i=0;i<n;i++){
        
            cin>>a[i];
        }
        sort(a.begin(), a.end());//, cmpp())
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        }
        else{
            vector<char> a, b;char val;
            for(int i=0;i<n;i++){
                cin>>val;
                if(i%2==0) a.push_back(val);
                if(i%2!=0) b.push_back(val);
            }
            // for(int i=0;i<n;i++){
            //     if(i%2==0) cout<<b[i/2];
            //     // if(i%2!=0) cout<<a[floor(i/2)+1];
            // }
            sort(b.begin(), b.end());//, 
            sort(a.begin(), a.end());//, 
            for(int i=0;i<b.size();i++){
                cout<<a[i]<<b[i];
            }
            if(a.size()>b.size()) cout<<a[a.size()-1];
        }cout<<"\n";
    }
    return 0;
}