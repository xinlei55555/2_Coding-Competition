#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

bool x_s(const pair<ll,ll> &a, const pair<ll, ll> &b){
    return a.first<b.first;
}

bool y_s(const pair<ll,ll> &a, const pair<ll,ll> &b){
    return a.second<b.second;
}
int main(){
    ll i,x,y,n;
    cin>>n;
    vector<pair<ll,ll>> sorted_x;
    vector<pair<ll,ll>> sorted_y;
    for(i=0;i<n;i++){
        cin>>x>>y;    
        sorted_x.push_back({x,y});
    }
    sorted_y=sorted_x;
    //sorting based on the x values;
        //don't put parenthesises for the custom functions.
    sort(sorted_x.begin(), sorted_x.end(), x_s);

    sort(sorted_y.begin(), sorted_y.end(), y_s);

    //remove the three largest areas;
    pair<ll,ll> removed;
    //!doesn't work, since you can also remove the first ones!
        //! best way is to actually brute force the four corners and determine what is the best to remove
        
    for(i=0;i<3;i++){
        n=sorted_x.size();
        ll n1=sorted_y.size();
        //this is the largest gap in x times the length in y (at the end)
        if((sorted_x[n-1].first-sorted_x[n-2].first)*(sorted_y[n1-1].second-sorted_y[0].second) > (sorted_y[n1-1].second-sorted_y[n1-2].second)*(sorted_x[n-1].first-sorted_x[0].first)){
            //gap in area in x is bigger
            removed=sorted_x[sorted_x.size()-1];
            debug(removed.first)
            debug(removed.second)
            sorted_y.erase(find(sorted_y.begin(), sorted_y.end(), removed));
            sorted_x.pop_back();

        }
        
        //this is the largest gap in x (at the beginning)
        else if((sorted_x[1].first-sorted_x[0].first)*(sorted_y[n1-1].second-sorted_y[0].second) > (sorted_y[1].second-sorted_y[0].second)*(sorted_x[n-1].first-sorted_x[0].first)){
            
        }
        else{
            removed=sorted_y[sorted_x.size()-1];
            debug(removed.first)
            debug(removed.second)
            sorted_x.erase(find(sorted_x.begin(), sorted_x.end(), removed));
            sorted_y.pop_back();
        }
    }
    cout<<(sorted_x[sorted_x.size()-1].first-sorted_x[0].first)*(sorted_y[sorted_y.size()-1].second-sorted_y[0].second);

    return 0;
}