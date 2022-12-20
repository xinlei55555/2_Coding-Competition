#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";

//I created another set called arr1, in case there is a 0 AND a 1 that give the same all the time.
unordered_map<string, int> arr;
long long idx;
char val, val1; 

//return if there is an idx which has all 0 give the same, or all 1 give same
bool check(int i){
  
    int j=0,returns;
    bool works=false;
    //checking for all 0s give the same
    for(auto x:arr){
        if(j==0) {val=x.first[i]; returns=x.second;}
        else if(x.first[i]==val){
            if(x.second!=returns) {break;}
        }
        else if(j==arr.size()-1) {return true;val1=val;idx=j;}
        j++;
    }

    //~if didn't work, then I switch val's value;
    returns=-1;j=0;
    if(!works){
        val=(val=='1'? '0':'1');
        for(auto x:arr){
            if(returns=-1 && x.first[i]==val) returns=x.second;
            else if(x.first[i]==val){
                if(x.second!=returns) {break;}
            }
            else if(j==arr.size()-1) {return true;val1=val;idx=j;}
            j++;
        }
    }
    return works;

    //checking for all 1s give the same
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,m,i; cin>>t;
    int j;
    string ans,s;
    while(t--){
        cin>>n>>m;

        bool hi=false;
        for(i=0;i<m;i++) {
            cin>>s>>j;
            //!input stuff
            if(arr.find(s) == arr.end()) arr.insert({s,j});
            //means that the element is already inside...
            else{
                if(arr[s]!=j) {hi=true;}
            }
            //cout<<"HI";
        }
        if(hi){cout<<"LIE\n"; continue;} 
        


        //!process
        ans="LIE";
        bool possible=false;
        //~first layer
        for(i=0;i<n;i++){
            if(check(i)) {possible = true; break;}
            //debug(possible)
        }
        if(!possible) {cout<<"LIE\n"; continue;}

        //~erase all values that respect the first layer
        for(auto x:arr) {
            if(x.first[idx]==val1) arr.erase(x.first);
        }

        //~Check if nothing left
        if(arr.size()==0) {cout<<"OK\n"; continue;}

        possible=false;
        //~second layer
        for(i=0;i<n;i++){
            if(check(i)) {possible = true; break;}
        }
        if(!possible) {cout<<"LIE\n"; continue;}

        //~erase all values that respect the second layer
        for(auto x:arr) {
            if(x.first[idx]==val1) arr.erase(x.first);
        }

        //debug(arr.size())
        //~Check if nothing left OR if everything else has the same value
        if(arr.size()==0) {cout<<"OK\n"; continue;}

        j=0;
        char prev;
        for(auto x:arr){
            if(j==0) prev=x.second;
            else if(j=arr.size()-1){
                cout<<"OK\n";
                break;
            }
            else{
                if(x.second!=prev) {cout<<"LIE\n";break;}
            }
            j++;
            
        }
        
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
