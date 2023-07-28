#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll n,m, r, c;
    cin>>n>>m>>r>>c;
    
    vector<vector<char>> arr (n, vector<char> (m, 'a'));
    if((r<=2 && c<=2 && (r!=c && (r==n||c==m)))||r>n||c>m){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
        
    char ccc;
    ll letter=0;

    //!this program doesn't work if you are asking for all the rows to be palindromes, but none of the columns
    //Ex: 3 3 3 0 should give aaa aba bab, instead it gives aaa aaa aaa
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(j<m-c && i<n-r) {
                //writing letters for the rest of the squares left.
                ccc=arr[i][j]+(letter%26+2);
                cout<<ccc;
                letter++;
            }
            else cout<<arr[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}

