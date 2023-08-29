#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
// #define debug_arr(x) for(auto el:x) for(auto element: el) debug(element);

char arr[51][51];
ll m, n;//, success, num;
string answer;
bool vis[51][51];

int rowMovement[4]{0, 1, 0, -1};
int columnMovement[4]{1, 0, -1, 0};


void flood(ll i, ll j){
    // for(int i=0;i<n;i++) {for(int j=0;j<m;j++){cout<<vis[i][j];} cout<<"\n";}
    if(i==n || j==m || i<0 || j<0 || arr[i][j]=='#' || arr[i][j]=='B' || vis[i][j]==true) return;
    // debug(i)
    // debug(j)
    vis[i][j]=true;
    // if(i==n-1 && j==m-1) {success++;}

    flood(i+1, j);
    flood(i-1, j);
    flood(i, j+1);
    flood(i, j-1);
}

string solve(){
    // num=0, success=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            // num+=(arr[i][j]=='G')?1:0; 
        }
    }
    // if(arr[m-1][n-2] == 'B' || arr[m-2][n-1]=='B' || arr[m-2][n-2]=='B') answer="NO";

    //adding walls around all bad guys;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (arr[i][j]=='B'){
                for(int x=0;x<4; x++){
                    int newRow = i+rowMovement[x];
                    int newCol = j+columnMovement[x];
                    //if a bad guy is next to a good guy, it's bad.
                    if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && arr[newRow][newCol]=='G'){
                        return "No";
                    }
                    //surround with '#'
                    //MAKE SURE THAT the square is IN THE BOUNDS
                    arr[newRow][newCol] = (newRow>=0 && newRow<n && newCol>=0 && newCol<m && arr[newRow][newCol]=='.')?'#':arr[newRow][newCol];
                }
            //!A better way to proceed.
                // if(arr[i+1][j]=='G' || arr[i][j+1]=='G' || arr[i-1][j]=='G'|| arr[i][j-1]=='G') answer = "No";
                // arr[i+1][j]=(arr[i+1][j]=='.')? '#': arr[i+1][j];
                // arr[i][j+1]=(arr[i][j+1]=='.')? '#': arr[i][j+1];
                // arr[i-1][j]=(arr[i-1][j]=='.')? '#': arr[i -1][j];
                // arr[i][j-1]=(arr[i][j-1]=='.')? '#': arr[i][j-1];
            }
        }
    }
    // for(int i=0;i<n;i++) {for(int j=0;j<m;j++){cout<<arr[i][j];} cout<<"\n";}

    //finding a path for all the good guys;
        //@better way is to run floodfill, and to visit all the squares that are possible from the last square. Then, loop through the array and check if all the good guys were visited!
        //*Instead of just looping from every good guy.
    memset(vis, false, sizeof(vis));
    flood(n-1, m-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //resetting all values to false;
            ///!USE CORRECT SYNTAX FOR MEMSET
            if(arr[i][j]=='G' && vis[i][j]==false) {return "No";}//memset(vis, false, sizeof(vis)); flood(i, j);}
        }
    }
    // debug(answer)
    // debug(success)
    // if(success<num) return "No";
    return "Yes";

}


//!NOTE, a way to make the program stop before the end, with many for loops, is to create a function solve(), and in that function, you can return!
int main(){
    ll t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}