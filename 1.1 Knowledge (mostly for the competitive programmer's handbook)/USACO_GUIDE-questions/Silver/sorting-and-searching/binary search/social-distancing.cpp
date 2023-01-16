#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cout<<#x<<" "<<x<<"\n";
bool cmp(pair<ll, ll>& first, pair<ll, ll>& second){
    return first.first<second.first;
}
int main(){
    ofstream cout("socdist.out");
    ifstream cin("socdist.in");
    ll n,i,m; cin>>n>>m;
    //instead of a map, they used a vector/arr of pairs!!!
    //map<ll, ll> coord;
    vector<pair<ll,ll>> coord (m);
    for(i=0;i<m;i++){
        cin>>coord[i].first>>coord[i].second;
        // cin>>a>>b;
        // coord[a]=b;
        
    }
    //just sorting to make sure that it is correct
    sort(coord.begin(), coord.end(), cmp);
    i=0;
    // for(auto x: coord){ cout<<x.first<<" "<<x.second<<endl; i++; if(i==20) break;}

    //binary search
        //prev is the last place where the cow was placed.
    //the maximal value is NOT n, but the last value in the coord.
    ll hi=coord[m-1].second, lo=1, mid, biggest=-1, count, j, prev;
    
    while(lo<=hi){
        mid=(floor(hi-lo)/2)+lo;
        debug(mid)
        // debug(hi)
        // debug(lo)

        i=0; 
        count=n-1;
        j=coord[i].first;
        prev=j;
        debug(j)
        while(i<coord.size()){
            if(count==0) break;
            //!error, I forgot to consider if d skips a whole patch...
            if(prev<=coord[i].first-mid){
                j=coord[i].first;
                count--;
                prev=j;
                debug(prev)
            }

            // debug(j)
            while(j+mid<=coord[i].second) {
                if(count==0) break;
                j+=mid;
                // debug(j)
                count--;
                prev=j;
                debug(prev)
            }
            i++;
        }
        // debug(count)

    /* old and useless stuff*/
        //I am starting at the lowest value in the coord.
            //using upper_bound(), I can access the next value in constant time!
            //!upper_bound returns an iterator!
            //I started i at the lowest value;
        // auto grass=coord.begin();
            //~grass was an iterator,thus explaining why I needed grass-> first; and not grass.first
        // auto grass=coord.upper_bound(-1);
        

        // i=coord[0].first;
        //count is the number of cows left to place;
            //I already placed one at grass=first;
        // count=n-1;
        //gotta be smaller or equal!!!
        //!gotta adapt this part so that it is consistent with the vector of pairs
        // while(i<=coord[m-1].second){
        //     if(count==0) break;
        //     debug(i)
        //     if(i+mid<=coord[]) {i+=mid; count--;}
        //     else{
        //         //finding the next patch of grass
        //         grass++;
        //         // grass=coord.upper_bound(grass->second);

        //         //no more higher values
        //         if(grass==coord.end()) break;

        //         i=grass->first;
        //         count--;
        //     }
        //     debug(count)
            
        // }
        //worked!
        if(count!=0){
            hi=mid-1;
        }
        else{
            biggest=max(mid, biggest);
            // cout<<"HI";
            lo=mid+1;
        }
    }
    cout<<biggest;

    return 0;
}