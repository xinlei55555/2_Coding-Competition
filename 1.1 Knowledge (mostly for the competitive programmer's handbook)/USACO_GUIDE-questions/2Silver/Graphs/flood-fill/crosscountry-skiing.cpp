#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define debug(x) cerr<<#x<<" "<<x<<"\n";

//define an array that contains a different array for each waypoint, and each array contains the values of the minimum to reach the certain waypoint
ll n, m,mp[501][501],waypt[501][501], vis[501][501], num=0, arr[2];

//!ok, so my method was to floodfill for each value of array, and find the minimum until then. The better method is to use binary search.
//, arr[250001][501][501];

//I am setting a value val, which corresponds to the elevation of the current pt, while prev is the value of the previous point. Then, if the change in elevation is too big, I'll skip. at the end, i'll jst compare if I successfully reached all the waypoints;
ll cnt, val, prev;
void flood(ll i, ll j, ll d, ll prev){
    val=mp[i][j]; 
    if(i>=n || j>=m || i<0 || j<0 || abs(val-prev)>d || vis[i][j]==true || cnt==num) return;
    if(waypt[i][j]==1) cnt++;
    vis[i][j]=true;
    prev=val;
    flood(i+1, j, d, prev);
    flood(i-1, j, d, prev);
    flood(i, j+1, d, prev);
    flood(i, j-1, d, prev);
}

//!!!!!LEARN TO WRITE PROPER BINARY SEARCH WHEN LOOKING FOR A SPECIFIC VALUE!
ll binary_search(){
    ll hi=1000000001, lo=0, mid;
    //you want either lo to become smaller than hi, or the other way around!
    while(hi>=lo){
        mid=(lo+floor(hi-lo)/2);
        // debug(mid)
        // debug(hi)
        // debug(lo)
        memset(vis, false, sizeof(vis));
        cnt=0;
        flood(arr[0], arr[1], mid, mp[arr[0]][arr[1]]);
        //starting point should be one of the waypoints, isntead of a random point.
        if(hi==lo){
            return mid;
        }
        else if(cnt==num){
            //don't forget that binary search, you gotta remove or add 1!!!
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
}

int main(){
    ifstream cin("ccski.in");
    ofstream fout("ccski.out");
    // cout<<"HI";
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mp[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>waypt[i][j];
            //counting the number of waypoints
            if(waypt[i][j]==1){
                num+=waypt[i][j];
                arr[0]=i;
                arr[1]=j;
            }
        }
    }
    fout<<binary_search();
    return 0;
}