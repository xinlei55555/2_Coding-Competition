#include <bits/stdc++.h>
using namespace std;

//!

// For each position i
// , let's determine its status: whether this position is winning or losing for the player who moved the chip into that position. Since a player can only move a chip into a position with smaller index, we can determine the statuses of positions in the order from 1
//  to n
// . You can treat it as dynamic programming.

// If there is no such j
//  that j<i
//  and pj<pi
// , then this position is a losing one, because the other player cannot make a move, which means they win (and the player who placed the chip in that position loses). Otherwise, the other player can make a move. And we already know whether the player wins if they place a chip for all previous positions. If there exists a position j
//  where a move can be made and j
//  is a winning position, then i
//  is a losing one (because our opponent will move there). Otherwise, i
//  is a winning position. Thus, we have a solution with a time complexity of O(n2)
// , for each position i
// , we need to iterate through all possible transitions j
// .

// However, we can notice that we are only interested in two simple properties to determine the status of each position: whether a move can be made from the current position, and whether a move can be made into a winning position. The first property can be easily checked if we maintain the minimum element up to the current position i
// , let's call it mn
// . And for the second property, it is sufficient to maintain the minimum element among winning positions, let's call it mnWin
// . Then, position i
//  is winning if mn<pi
//  and mnWin>pi
// . Thus, the time complexity of the solution is O(n)

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        //for each value, move[value] gives the number of moves that can be played.
        int a[n], ans=0, mx=0;
        vector<int> moves(n, -1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            moves[a[i]]=0;
            for(int j=0;j<a[i];j++){
                if(moves[j]!=-1) {
                    moves[a[i]]+=moves[j];
                    moves[a[i]]++;
                }
                // mx=max(mx, moves[a[i]]);
            }
            cerr<<a[i]<<" "<<moves[a[i]]<<" \n";
            if(mx<=moves[a[i]]){
                ans++;
            }
            mx=max(mx, moves[a[i]]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}