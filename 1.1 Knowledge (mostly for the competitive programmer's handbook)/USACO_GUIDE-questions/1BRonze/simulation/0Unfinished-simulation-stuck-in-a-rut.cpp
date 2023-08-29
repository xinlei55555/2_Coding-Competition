#include <bits/stdc++.h>
//there is a math solution
using namespace std;
int main(){

    //! important lesson: since the unordered_map needs to be ordered in its own way, putting a vector as the key doesn't work! (a vector cannot be reduced in the specific weird order)
    // unordered_map<pair<long long, long long>, char> mp;
    map<pair<long long, long long>, char> mp;
    int n;
    cin>>n;
    //mx is going to be the largest coordinate of the entire bunhc
    //this will serve to create the board that contains the cows
    long long a,b, mx=0;
    char dir;
//!ok, so I figured, I just need to place the corresponding characters in the array
    //!problem: how to create a map of pairs
    
    //yea, using an array is weird, in this case, people prefer to use vectors.
    // vector<long long> coordinates(2,0);
    //int coordinates[2];

    while(n--) {cin>>dir>>a>>b; mp.insert({{a, b},dir}); mx=max(a,b,mx);}
    char arr[mx][mx]={{0}};

    //then, at first, i'll put all my values into the intial arr
    for(auto x: mp) arr[x.first.first][x.first.second] = x.second; 
    long long i, j;
    for(i=mx; i!=0; i--){
        for(j=mx; j!=0; j--){
            cerr<<arr[i][j]<<"\n";
        }
    }
   
   return 0;

}