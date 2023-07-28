#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

//DFS Or BFS would work in this case. I will do BFS, simply for the sake of practicing.
    //!usually BFS is used when we need to find the shortest path

//deque will contain the coordinates (n, m) of the next elements to traverse. 
deque<vector<ll>> d;

ll m,n,i,j;
bool finished=false;

//d2 array containing visited
    //vis makes sure that we don't uselessly loop more than once at any point
vector<vector<bool>> vis;
//no need of adj list (I would do that if I were in  graph, yet here, we are in a 2d array, easier to input 2d array)
//!ok, so this method of saving is not efficient enough.
vector<vector<ll>> arr;

ll r,c,val; 

void factor(ll val);

void BFS(ll val, ll r, ll c){
    //remove the last element visited
    d.pop_front();
    vis[r][c]=true;

    
    //reach end
    if(r==n && c==m) {cout<<"yes\n"; finished=true; return;}
        
    if(val==r*c && !vis[r][c]){
        d.push_back({r,c});
    }

    factor(val);

    r=d.front()[0];
    c=d.front()[1];
    val=arr[r][c];
    //here,I had a loop that messed everything up in the debug
    if(!d.empty()) BFS(val, r, c);
}

//checking possible combinations and adding them
    //basically determining all factors of a number;
//!finding the factors of the number takes too much time.
    //better save in the array directly the number at the position i*j
void factor(ll val){
    for(i=1;i<=sqrt(val);i++){
        if(val%i==0){
            //making sure that the value are placed at the smaller
            if((i)<=n && (val/i)<=m ) {
                if(!vis[i][val/i]) d.push_back({i, val/i}); 
            }
            if(i<=m && val/i<=n){
                if(!vis[val/i][i]) d.push_back({val/i, i});
            }
        }
    }
}

int main(){
    cin>>n>>m;
    arr.resize (n+1, vector<ll> (m+1, -1));
    vis.resize(n+1, vector<bool>(m+1, false));

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }

    //start at 1, 1
    d.push_back({1,1});
    
    
    r=d.front()[0];
    c=d.front()[1];
    val=arr[1][1];
    BFS(val, r, c);
    
    
    if(!finished) cout<<"no\n";

    return 0;
}
        //!reading error!
/*
        check(val, r+1, c);
        check(val, r, c+1);
        check(val, r-1, c);
        check(val, r, c-1);
    }
    debug(finished)
    if(!finished) cout<<"no\n";

    return 0;
}
*/
