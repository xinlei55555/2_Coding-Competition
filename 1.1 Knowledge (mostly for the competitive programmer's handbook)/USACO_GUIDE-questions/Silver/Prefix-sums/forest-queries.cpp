#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, q; cin>>n>>q;
    //this will be my 2d prefix sum
    vector<vector<int>> arr (n+1,vector<int> (n+1, 0)); 
    //[n+1][n+1] = {{0}};
    char c;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>c;

            //prefix 2d array (another way is to have the first row become 0s)
            //!constructing a double-array prefix thingy isn't as easy as just adding up the top and the bottom. You have to go first, by the row, then by the column;
            //arr[j][i]+=(arr[j-1][i]+arr[j][i-1]);
            //~instead, I gotta add the row, then the column!
                //j is x, i is y, since i is the outer loop
            arr[i][j]=arr[i][j-1];

            arr[i][j]+=(c=='*'? 1:0);
            

            // cout<<arr[i][j];
            // cout<<" ";
        }
    }
    //doing the prefix thingy for the columns
        //don't forget to loop UNTIL n INCLUDED
    for(i=1; i<=n;i++){
        for(j=1;j<=n;j++){
            arr[i][j]+=arr[i-1][j];
        }  
    }

    // for(auto x:arr){ for(auto y:x) cout<<y<<" "; cout<<"\n";}
    // cout<<" \n";

    
    int x1, x2, y1, y2;
    for(i=0;i<q;i++){
        cin>>y1>>x1>>y2>>x2;
        //this is wrong, we want y before x
        // cout<<arr[y1][x1]<<" "<<arr[y2][x2]<<endl;


    //notice that here, the coordinates of the corners are 1-indexed
        //since I have a prefix sum, to get the sum of a prefix 
        //!attention au index, y2 vs y1
        int ans=(arr[y2][x2]-arr[y1-1][x2]-arr[y2][x1-1]+arr[y1-1][x1-1]);
        cout<<ans<<"\n";
    }
    return 0;
}




