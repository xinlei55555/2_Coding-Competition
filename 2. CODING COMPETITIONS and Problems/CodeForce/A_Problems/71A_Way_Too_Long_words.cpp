#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    string w;
    for(int i=0; i<n; i++){
        cin>>w;
        if(w.size()>10){

            cout<<w[0]<<w.size()-2<<w[w.size()-1]<<"\n";
        }
        else cout<<w<<"\n";
    }
    return 0;
}