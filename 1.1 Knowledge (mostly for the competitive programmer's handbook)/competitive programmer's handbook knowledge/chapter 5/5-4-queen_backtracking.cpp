#include <bits/stdc++.h>
using namespace std;
int n;

//for arrays, you have to pass it by reference, through a parenthesis.
    //bruhh ,ok, I refuse, idk how to pass an array by reference
bool check(vector<vector<int>>v, int j){
    //check if config is valid
        //it is impossible that the queen will be on the same row, since I was adding one at a time.
    for(int i=0; i<v[0].size(); i++){
        //a queen on the same column
        if(v[i][j]==1) return false;
        
        //a queen on the same diagonal
            //then their slopes(y+1)/(x+1) should be the same... I used +1, so that we don't encounter 0
        //!instead of checking for each diagonal. I could create three independent matrices
            //each of these matrices would contain information about where a queen cannot be...
                //indeed, if I add a queen to a certain row, I can indicate ALL the elements in the column as having queens, ALL both of the diagonals can be filled with queens.
        for(int k=0; k<v[i].size(); k++){
            if((i+1)/(j+1) == )
        }
    }
    return true;
}
void queen(vector<vector<int>> &v, int i, int ans){
    if(i==n){
        //this means that I reached the end of the array
        ans++;
        for(auto x:v) {cout<<"\n"; for(auto y:x)cout<<y; }  
    }
    for(int j=0; j<v.size(); j++){
        //i try every single element of the row
        v[i][j]=1;

        if(!check(v, j)) continue;
        queen(v, i+1, ans);
    }
}

int main(){
    
    //size of the board.    
    cin>>n;
    //array of nxn size with all 0s.
    vector<vector<int>> v (n, vector<int>(n,0));

    int ans=0;

    queen(v, 0, ans);

    return 0;
}