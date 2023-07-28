#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<"\n"<<#x<<" "<<x;
int i,j,arr[11][11]={0};
int check(int x1, int y1, int x2, int y2){
    cout<<"\n"<<i<<" "<<j<<endl;
    debug(x1)
    debug(y1)
    debug(x2)
    debug(y2)
    //if no interlapping, it'll skip everything
    for(int k=y1; k<=y2;k++){
        for(int l=x1;l<=x2;l++){
            debug(k) 
            debug(l)
            debug(arr[k][l])
            
            if(arr[k][l]==i){return i;}
            if(arr[k][l]==j){return j;}
        }
    }
    return 0;
}
int main(){
    ofstream fout("art.out");
    ifstream cin("art.in");
    int n;cin>>n;
    vector<vector<int>> order(10, {n,n,-1,-1});//{x,y,x,y}
    cout<<n;

    //I wanna be able to reorder the elements in the vector, so ima use vector<pair<int,int>>
    //i'll be saving 2 coordinates for every color, the largest corner and the smallest corner
        //~I put 10 elements, since the color 0 does not exist, but I am not going to include it anyways.
    //this set contains all the possible OLDEST colors.
    unordered_set<int> colors, left;
    char c;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            //where i is the y coordinate, and j is the x coordinate
            cin>>c;
            if(c=='0') continue;
            arr[i][j]=c-'0';
            colors.insert(arr[i][j]);
            order[arr[i][j]]={
                min(j, order[arr[i][j]][0]), 
                min(i, order[arr[i][j]][1]), 
                max(j, order[arr[i][j]][2]), 
                max(i, order[arr[i][j]][3])
            };
            // if(c=='3') {cout<<i<<" "<<j<<"\n";
            // for(auto x:order[3]) cout<<x<<" ";

        }       
    } 
    left=colors;
    for(auto x:order) {cout<<"\n";for(auto y:x) cout<<y<<" ";}
    
    //!time to compare the colors against each other.
        //*basically, I am going to compete the "contested areas", which are areas where two colors overlap
        //there should only be 1 color out of the two found in any contested area, if any. 
            //if I find a color, I will bump it out of the set
    int removed,ans=colors.size();
    
    //!BRUH, it's i<=9, NOT i<9
    for(i=1;i<=9;i++){
        //if color not in the set, continue;
        if(!(colors.find(i)!=colors.end())) continue;
        for(j=i+1;j<=9;j++){
            //checking if it exists;
            if(!(colors.find(j)!=colors.end()))continue;

            //~note, the colors in the set 
            removed=check(
                max(order[i][0],order[j][0]),
                max(order[i][1],order[j][1]),
                min(order[i][2],order[j][2]),
                min(order[i][3],order[j][3])
                );
            debug(removed)
            //none need to be removed
            if(removed==0) continue;
            //problem though... I can't remove numbers twice.
            if((removed==i||removed==j) && left.find(removed)!=left.end()) ans--;
            debug(ans)
            //better directly remove from the set
            left.erase(removed);
        }
    }
    fout<<ans;
    // fout<<colors.size();

    return 0;
}