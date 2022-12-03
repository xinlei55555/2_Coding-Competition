#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i;
    cin>>a>>b;
    int j, x1=51, y1=51, x2=0, y2=0;
    char  arr[a][b];
    //store all values
    for(j=0; j<a; j++){
        for(i=0; i<b; i++){
            cin>>arr[j][i];
            //store the top left corner, and bottom right corner
            if(arr[j][i]=='*'){
                x1=min(j, x1);
                y1=min(i, y1);
                x2=max(x2, j);
                y2=max(y2, i);
          }
        }
    }
    for(i=x1; i<=x2; i++){
        for(j=y1; j<=y2; j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}