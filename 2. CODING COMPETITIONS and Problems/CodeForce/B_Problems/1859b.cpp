#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
#define MAX 1000000001

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<ll>> a;
        vector<ll> answer;
        ll ans=0, abs_min=MAX, tmp_snd=MAX, mn2=MAX, idx_mn2;
        for(int i=0;i<n;i++){
            int m;cin>>m;
            vector<ll> val_vec(m, 0);
            for(int j=0;j<m;j++) {cin>>val_vec[j];} 
            sort(val_vec.begin(), val_vec.end());
            a.push_back(val_vec);
            abs_min=min(abs_min, val_vec[0]);
            mn2=min(mn2, val_vec[1]);
            // answer.push_back(val_vec[0]);
            answer.push_back(val_vec[1]);
            if(abs_min==val_vec[0]) tmp_snd = i;
            if(mn2==val_vec[1])idx_mn2=i;
            // if(val_vec[0]!=abs_min) tmp_snd=min(val_vec[0], tmp_snd);
        }
        // sort(answer.begin(), answer.end());
        // for(int i=1;i<n;i++){ans+=answer[answer.size()-i];}
        // sort(answer.begin(), answer.end());
        for(int i=0;i<n;i++){
            if(i!=idx_mn2) {
                ans+=a[i][1];
            }
        }
      
        ans+=abs_min;
        cout<<ans<<"\n";
    }
    return 0;
}