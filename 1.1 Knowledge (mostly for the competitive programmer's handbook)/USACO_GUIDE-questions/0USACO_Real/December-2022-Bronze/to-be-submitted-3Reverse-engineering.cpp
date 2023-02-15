//! The actual solution is just testing the if and else solutions
    //no smaart thing with the "if I can remove all values, then blabla..."


#include <bits/stdc++.h>
using namespace std;
//#define debug(x) cout<<#x<<" "<<x<<"\n";

//I created another set called arr1, in case there is a 0 AND a 1 that give the same all the time.
//~!For usaco, don't use an unordered map, since the time limit is inexistant, and because you can't remove elements from an unordered_map when in a loop (bugs my computer)
vector<pair<string, int>> arr;
int idx;
char val1; 

//return if there is an idx which has all 0 give the same, or all 1 give same
bool check(int i){
    set<int> diff0,diff1;
    for(auto x: arr) {
        (x.first[i]=='0' ? diff0.insert(x.second):diff1.insert(x.second));
    }
    if(diff0.size()==1) {val1='0';idx=i;return true; }
    else if(diff1.size()==1){val1='1';idx=i;return true;}
    else return false;

}


int main(){
    
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    //ifstream cin("test.in");
    long long t,n,m,i; cin>>t;
    int j;
    string ans,s;
    while(t--){
        cin>>n>>m;
        //cout<<n<<m;

        bool hi=false;
        for(i=0;i<m;i++) {
            cin>>s>>j;
            arr.push_back({s,j});
        //debug("work")
            //!input stuff
            //if(arr.find(s) == arr.end()) arr.insert({s,j});
            //means that the element is already inside...
            //else{
            //    if(arr[s]!=j) {hi=true;}
            //}
            //cout<<"HI";
        }
        //if(hi){cout<<"LIE\n"; continue;} 
        
    //     //only one test case
    //     //if(m==1) {cout<<"OK\n";continue;}


    //     //!process
    //     ans="LIE";
        bool possible=false;
    //     //~first layer
        for(i=0;i<n;i++){
            if(check(i)) {possible = true; break;}
        }
    //     //debug(possible)
    //     //debug(arr.size())
        if(!possible) {cout<<"LIE\n"; continue;}

    //     //~erase all values that respect the first layer
    //     for(auto x:arr) {
    //         if(x.first[idx]==val1){ //arr.erase(x.first);}
    //     }
    // cout<<"HI";
        auto it=arr.begin();
        while(it!=arr.end()){
            //can't iterate through a programa set, and erase values, since these values are changing when iterating! (*chatgpt)
            if(it->first[idx]==val1) arr.erase(it);
            else{
                it++;
            }
        }

    //     //~Check if nothing left
        if(arr.size()==0) {cout<<"OK\n"; continue;}

        possible=false;
        //~second layer
        for(i=0;i<n;i++){
            if(check(i)) {possible = true; break;}
        }
        // debug(possible)
        // debug(arr.size())

        if(!possible) {cout<<"LIE\n"; continue;}

        //~erase all values that respect the second layer
        //for(auto x:arr) {
        
        for(it=arr.begin();it!=arr.end(); ){
            //can't iterate through a programa set, and erase values, since these values are changing when iterating! (*chatgpt)
            if(it->first[idx]==val1) arr.erase(it);
            else{
                it++;
            }
        }

        // debug(arr.size())
        //~Check if nothing left OR if everything else has the same value
        if(arr.size()==0) {cout<<"OK\n"; continue;}

        
        set<char> prev;
        //we wanna make sure all elements are the same, so we must check if the size of the set is 1;
        for(auto x:arr){
            prev.insert(x.second);  
        }
        
        cout<<((prev.size()==1 || prev.size() == 0)? "OK\n":"LIE\n");
    //     
    }
    return 0;
}





        // for(i=0;i<n;i++){
        //     //if (b[i] == 1) return 1;

        //     j=0;
        //     for(auto b:arr){
        //         if(b.first[i]=='1' && b.second!='1') break;
        //         if(j==m-1) {ans="OK";}
        //         j++;
        //     }
        //     if(ans=="OK") {cout<<"OK"; break;}

        //     //if (b[i] == 1) return 0;
        //     j=0;
        //     for(auto b:arr){
        //         if(b.first[i]=='1' && b.second!='0') break;
        //         if(j==m-1) {ans="OK";}
        //         j++;
        //     }
        //     if(ans=="OK") {cout<<"OK"; break;}

        //     j=0;
        //     //if (b[i] == 0) return 0;
        //     for(auto b:arr){
        //         if(b.first[i]=='0' && b.second!='0') break;
        //         if(j==m-1) {ans="OK";}
        //         j++;
        //     }
        //     if(ans=="OK") {cout<<"OK"; break;}

        //     //if (b[i] == 1) return 1;
        //     j=0;
        //     for(auto b:arr){
        //         if(b.first[i]=='1' && b.second!='1') break;
        //         if(j==m-1) {ans="OK";}
        //         j++;
        //     }
        //     if(ans=="OK") {cout<<"OK"; break;}


        //     //if(b[i]==1) return 1;
        //     //else if(b[i]==1) return 





        //     cout<<ans;
