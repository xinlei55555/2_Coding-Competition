#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b; //int ans=0;
    cin>>a>>b;
    int i=0,j=0; 
        //same goes with the loop, I gotta loop through b, not a
    while(i<b.size()){
        //bruh, I was looping through thes econd element, while I wanted to loop through the first element.
            //the second string is the one giving the instructions!!! while the first string is the one that simply gives the intiial ocnfiguraiton TT
       if(b[i]==a[j]) j++;
       i++;
    }
    // while(i<b.size()){
    //     j=i;
    //     while(j<a.size()){
    //         // ans++;
    //         // i++;    
    //         // j++;
    //         // cout<<b[i]<<i<<"hye"<<endl;
    //         if(b[i]==a[j]){
    //             ans++; 
    //             i++;
    //             j++;
    //         }else{ i++; break;}
            
    //     }
    //     // i++;
    // }
    cout<<(j+1);
    return 0;
} 