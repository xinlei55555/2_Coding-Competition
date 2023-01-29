#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";
//!omg read the question well
int main(){
    ll n,i,j, high_h, high_g;
    string s;
    cin>>n>>s;
    vector<ll> arr(n);
    for(i=s.size()-1;i>=0;i--){
        if(s[i]=='H') {high_h=i+1; break;}
    }
    for(i=s.size()-1;i>=0;i--){
        if(s[i]=='G') {high_g=i+1; break;}
    }
    debug(high_h)
    debug(high_g)
    pair<ll, ll> pos_h={-1,0};
    pair<ll,ll> pos_g={-1,0};
    ll g_count=0,h_count=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(s[i]=='G' && g_count==0){
            g_count++;
            if(arr[i]>=high_g && i+1<=high_g){
                pos_g.first=i+1;
            }
        }
        if(s[i]=='H' && h_count==0){
            h_count++;
            if(arr[i]>=high_h && i+1<=high_h){
                pos_h.first=i+1;
            }
        }
    }
    debug(pos_h.first)
    debug(pos_g.first)
    for(i=0;i+1<pos_h.first;i++){
        if(s[i]=='G' && arr[i]>=pos_h.first){
            pos_h.second++;
            debug(arr[i])
        }
    }
    for(i=0;i+1<pos_g.first;i++){
        if(s[i]=='H' && arr[i]>=pos_g.first){
            pos_g.second++;
        }
    }
    debug(pos_g.second)
    debug(pos_h.second)
    ll ans=pos_g.second+pos_h.second+(pos_h.first!=-1)*(pos_g.first!=-1);
    cout<<ans;
    return 0;
}
// int main(){
//     ll n, i,j;
//     string s;
//     ll arr[100001];
//     cin>>n;
//     cin>>s;
//     //find max index;
//     ll h_idx=-1, g_idx=-1;
    
//     for(i=s.size()-1; i>=0;i--){
//         debug(i)
//         if(h_idx!=-1 && g_idx!=-1) break;
//         if(s[i]=='H' && h_idx==-1) h_idx=i;
//         if(s[i]=='G' && g_idx==-1) g_idx=i;
//     }
//     //since we are 1-indexed
//     h_idx++;
//     g_idx++;
//     debug(h_idx)
//     debug(g_idx)
//     //key: all h that are bigger than max h
//         //value: all the g that include that h.
//     pair<ll,ll> possible_h={-1,0};
//     pair<ll,ll> possible_g={-1,0};
//     bool h_i=true, g_i=true;
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//         if(s[i]=='H' && h_i==true){
//             if(arr[i]>=h_idx){
//                 possible_h.first=i+1;
                
//                 debug(i)
//             }

//             h_i=false;
//         }
//         else if(g_i==true){
//             if(arr[i]>=g_idx){
//                 possible_g.first=i+1;
                
//                 debug(i)
//             }
//             g_i=false;
            
//         }
//     } 
//     debug(possible_h.first)
//     debug(possible_g.first)
//     for(i=0;i<n;i++){
//         debug(i)
//         debug(arr[i])
//         if(s[i]=='G'){
            
//             if(arr[i]>=possible_h.first && i<possible_h.first){
//                 possible_h.second++;
//                 debug(possible_h.second)
                
//             }
//         }
//         else if(s[i]=='H'){
//             if(arr[i]>=possible_g.first && i<possible_g.first){
//                 possible_g.second++;
//                 debug(i+1)
//                 debug(possible_g.second)
                
//             }
//         }
//     }
    
//     ll ans=(possible_h.first!=-1)*(possible_g.first!=-1);
//     debug(ans)
//     ans+=(possible_h.second);
    
//     debug(ans)
    
//     ans+=(possible_g.second);
    
//     debug(ans)
//     cout<<ans;
//     return 0;
// }