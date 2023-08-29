#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

deque<pair<ll,ll>> d;
vector<vector<ll>>parent, level;
void edge(ll x,ll y, char par, pair<ll,ll> lev){
    if(level[x][y]!=INT_MAX) return;

    d.push_back({x,y});
    parent[x][y]=par;
    level[x][y]=level[lev.first][lev.second]+1;

}

int main(){
    //since we want the shortest path possible, then BFS
    ll i,j,n, m;
    pair<ll, ll> a,b;
    cin>>n>>m;
    vector<vector<char>> lab(n, vector<char> (m, '#'));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>lab[i][j];
            if(lab[i][j]!='#'){
                switch (lab[i][j]){
                    case 'A':
                        a={i, j};
                        break;
                    case 'B':
                        b={i,j};
                        break;
                }
            }
        }
    }

    parent.resize(n, vector<ll>(m, 'O'));
    level.resize(n, vector<ll>(m, INT_MAX));
    d.push_back(a);

    level[a.first][a.second]=0;
    //BFS
    pair<ll,ll> tmp;
    ll x,y;
    while(!d.empty()){
        tmp=d.front();
        d.pop_front();
        x=tmp.first;
        y=tmp.second;

        if(x==b.first && y==b.second) break;
        //add neighbouring edges
    
        if(lab[x+1][y]!='#') edge(x+1, y, 'D', tmp);
        if(lab[x][y+1]!='#') edge(x, y+1, 'R', tmp);
        if(lab[x-1][y]!='#') edge(x-1, y, 'U', tmp);
        if(lab[x][y-1]!='#') edge(x, y-1, 'L',tmp);
    }
    
    if(parent[b.first][b.second] == 'O') cout<<"NO\n";

    //a better way is to define
    int dx[4] = { -1, 0, 1, 0 };
    int dy[4] = { 0, 1, 0, -1 };
    string stepDir = "URDL";

    else{
        cout<<"YES\n";
        ll count=0;
        x=b.first, y=b.second;
        //going back from b
        while(x!=a.first || y!=a.second){
            
        }

    }
    return 0;
}