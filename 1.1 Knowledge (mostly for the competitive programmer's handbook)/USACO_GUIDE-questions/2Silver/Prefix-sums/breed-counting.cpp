#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("bcount.in");
    ofstream cout("bcount.out");
    int n, q;
    cin>>n>>q;
    n++;
    int h[n]={0},g[n]={0},j[n]={0};
    int i,a;
    for(i=1;i<n;i++){
        cin>>a;
        g[i]=g[i-1];
        j[i]=j[i-1];
        h[i]=h[i-1];
        switch(a){
            case 1:
                h[i]++;
                
                //cout<<"HI";
                break;
            case 2:
                g[i]++;
                
                
                //cout<<"Hello";
                break;

            case 3:
                j[i]++;
                
                //cout<<"Helllllo";
                break;



        }
    }
    int b;
    for(i=0;i<q;i++){
        cin>>a>>b;
        a--;
        cout<<h[b]-h[a]<<" "<<g[b]-g[a]<<" "<<j[b]-j[a]<<"\n";
    }

    return 0;
}