#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    //basically, a 2D boolean vector.
    ll m, n, k, i, a;
    //m is the number of row, n is the nuber of columns
    cin>>a>>n>>k;
    //first method, use a vector of bools;
    // vector<vector<bool>> canvas=(n, vector<bool> (n, false));

    //second method, count the number of rows.
    //count the number of columns given
        //doesn't matter the order by which the elements are changed
    unordered_set<ll> row, col; //contains the value of the rows/columns that ARE all gold.
    char s;
    for(i=0;i<k;i++){
        cin>>s>>m;
        //humm, doesn't work, make sure it doesn't repeat.
        if(s=='R') {
            if(row.find(m)==row.end()) row.insert(m);
            else row.erase(m);
        }
        else{
            if(col.find(m)==col.end()) col.insert(m);
            else col.erase(m);

        } 
    }
    // for(auto x: row) debug(x) 
    // for(auto y: col) debug(y)
    // debug(a)
    // debug(n)
    // swap(a,n);
    

    cout<<(n-col.size())*(row.size())+(a-row.size())*(col.size());

    return 0;
}
    //second method, use a list that represents for the rows, and a list for each column
    // ll row[m]={n};
    // ll col[n]={m};
    // char c;
    // for(i=0;i<k;i++){
    //     cin>>c>>m;
    //     if(c=='R'){
    //         row[m]
    //     }

    // }