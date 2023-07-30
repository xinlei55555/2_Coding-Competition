#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
#define MAX_INT 1000

ll m,n,rooms=0, count=0;
char grid[MAX_INT][MAX_INT];
// #initialize array of false, by default
bool vis[MAX_INT][MAX_INT];

void flood(ll i, ll j){
    if(i<0 || i>=m || j<0 || j>=n || vis[i][j] || grid[i][j]=='#') return;
    vis[i][j]=true;
    flood(i+1, j);
    flood(i, j+1);
    flood(i-1, j);
    flood(i, j-1);
}

int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!vis[i][j] && grid[i][j]!='#'){
                //everytime I run flood, I label all the connected nodes as visited, and i add 1 to the number of rooms;
                rooms++;
                flood(i, j);
            }
        }
    }

    cout<<rooms;
    return 0;
}