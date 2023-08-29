#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr<<#x<<" "<<x<<"\n";
typedef long long ll;
vector<vector<char>> arr;
vector<vector<bool>> vis;

ll per=-1, area=-1;

//first array represents the vertical direction
ll indexes[2][4]={{-1, 0, 1, 0},{0, -1, 0, 1}};
ll n,i, j;

void dfs(ll i, ll j, ll tmp_a,ll tmp_p){
    debug(per)
    debug(area)
    vis[i][j]=true;
    //determine the perimeter in the surrounding;
    for(int k=0;k<4;k++){
        //if the surrounding points are '.', then increase by 1 the perimeter.
        if(i+indexes[0][k]<0 || j+indexes[1][k]<0 || i+indexes[0][k]>=n || j+indexes[1][k]>=n) {tmp_p++; continue;}
        else if(arr[i+indexes[0][k]][j+indexes[1][k]]!='#') tmp_p++;
        debug(per)
        debug(tmp_p)
    }

    per=max(tmp_p, per);
    area=max(tmp_a, area);

    for(auto x: vis) {cout<<"\n"; for(auto y: x){ cout<<y<<" ";}}
    for(int k=0;k<4;k++){
        //!check for out of bounds
        if(i+indexes[0][k]<0 || j+indexes[1][k]<0 || i+indexes[0][k]>=n || j+indexes[1][k]>=n) {continue;}

        else if(arr[i+indexes[0][k]][j+indexes[1][k]]=='#' && vis[i+indexes[0][k]][j+indexes[1][k]]==false) {
            //here, just adding tmp_p and tmp_a+1 won't work, since it could branch off in different ways, but still be a block
                //instead, visit every neighbouring squares, and if out of bound, or '.', then break.
            dfs(i+indexes[0][k], j+indexes[1][k], tmp_a+1, tmp_p);
        }
    }
}

int main(){
    // ifstream cin("perimeter.in");
    // ofstream cout("perimeter.out");<
    for(int k=0;k<4;k++){
        cout<<indexes[0][k]<<" "<<indexes[1][k];
    }
    cin>>n;
    arr.resize(n, vector<char>(n, '.'));
    vis.resize(n, vector<bool> (n, false));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(!vis[i][j] && arr[i][j]=='#'){
                dfs(i, j, 1, 0);
            }
        }
    }    
    cout<<area<<" "<<per;
    return 0;
}