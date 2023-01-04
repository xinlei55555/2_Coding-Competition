#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        m--;
        int i,arr[n], pref[n], ans=0;
        cin>>pref[0];
        arr[0]==pref[0];

        int idxa=arr[0], idxb=arr[0], neg=-1;
        for(i=1;i<n;i++){
            cin>>arr[i];
            pref[i]=arr[i];
            pref[i]+=pref[i-1];

            
            if(i<m && pref[idxa]>pref[i]) idxa=i;

            //saving the smallest negative value
            
            if(arr[i]<0) {
                if(neg==-1) neg=i;
                else if(arr[i]<arr[neg])neg=i;
            }
            if(m<i && pref[idxa]<pref[m]) {
                
            }
            
        }
        //changing the elements before the m-th element in the prefix sum.
    }
    return 0;
}