/*
    *such is the concept, basically i'll be storing every single two values of "not friends" into a list.
        *the list is going to contain the DISTANCE between the two not friends.
        *it's also going to store the LOWEST distance, since if a friend, such as 2, does not know 3, there is NO POINT in knowing that he doesn't know 4, and 5, etc.

    *then, for every size, I know the number of friends is n (size of the total array) - current size checked + 1
        I can then determine the number of sizes that DON"T work! 

        *!through my thorow testing, I also determined that the maximum amount of possible sizes is just (N)(N+1)/2
*/
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" "<<x<<" ";
int main(){
    int t;cin>>t;
    while(t--){
        long long n, m, mx;cin>>n>>m;
        long long nf[n]={0}, diff, a, b, i,size;

        //saving the values in the difference array
            //~in theory, I only need to put the first element of the difference, since, by the time we loop to the second element, it is irrelevant
        while(m--){
            //some people did the same thing, but instead of storing the difference between the first and last element, they stored the index of the last element of the pair.
            cin>>a>>b;
            diff=abs(a-b);
            //so that is suits the 0-indexed array
            a--;
            b--;
            //another option to keep bigger and smaller would be 
            //if(a>b) swap(a,b); 
            if(a<b){
                nf[a]=(nf[a]==0? diff: min(diff, nf[a]));
                //nf[b]=(nf[b]==0? b:max(-1*diff, nf[b]));
            }
            else{
                nf[b]=(nf[b]==0? diff:min(diff, nf[b]));
                //nf[a]=(nf[a]==0? a: max(-1*diff, nf[a]));
            }
        }
        //mx is the max number of possibilities
//        for(auto x: nf) debug(x)
        mx=n*(n+1)/2;
        i=0;
        size=n;
        while(i<n){
            //basically, if there is a value at the given number, then the number of combinations removed is (current_maximum_size-nf)
            if(nf[i]!=0) {mx-=(size-nf[i]);size--;}
            // debug(i)
            // cout<<" : ";
            // debug(size)
            // debug(mx);
            // cout<<"\n";
            
            i++;
        }
        cout<<mx<<"\n";
    }
    return 0; 
}

//         //!Ok, I thought of a possible linear implementation using this 
       

//         //looping through every size possible, except 1 (since 1 will always be good)
//         // for(size=n;size>1;size--){
//         //     //i will dictate the first index
//         //     for(i=0; i<=n-size; i++){
//         //         //j will serve to loop through every element of the given size
//         //         //!
//         //         for(j=i; j<i+size; j++){
//         //             debug(j)
//         //             //this means that an element in the subarray is not friend with another one in the subarray, since the difference between both is smaller than size
//         //             if(nf[j]!=0&&nf[j]<=size-1) {mx--; cout<<" WRONG ";}
//         //         }
//         //     }
//         //     cout<<"\n"<<size<<" ";
//         //     debug(mx)
//         // }
//         cout<<mx<<"\n";
//     }
 


//!- I was not concentrated, trying to brute force everything?
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_map<long long, set<long long>> nf;
//     long long t,n,m;
//     cin>>t;
//     while(t--){
//         cin>>n>>m;
//         long long i,j,k,a,b;
//         for(i=0;i<m;i++){
//             cin>>a>>b;
//             if(nf.find(a)==nf.end())nf.insert({a,{b}});
//             else nf[a].insert({b});

//             if(nf.find(b)==nf.end())nf.insert({b,{a}});
//             else nf[b].insert({a});
//         }
//         long long mx=n;
//         //! I just brute forced it TT
//         //!i will be the size of the subsegments
//         //!lmao, I was writing a quadruple for loop. It's just a triple for loop TT
//         //first index
//         for(i=0;i<n;i++){
//             //the size
//             for(j=1; i<=n;j++){
//                 //loops from the first index to the size
//                 for(k=i;k<j+i;k++)
//             }
//         }
      
//         cout<<mx<<"\n";

//     }
//     return 0;

// }
//   // for(i=2;i<=n;i++){

//         //     bool ind=false;
//         //     for(j=1;j+i<=n;i++){
//         //         for(k=j;k<=(j+i)-1;k++){
                    
//         //             for(long long l=k+1; l<=j+i;l++){
//         //                 if(nf[l].find(k)!=nf[l].end() || nf[k].find(l)!=nf[k].end()){
//         //                     ind=true;
//         //                     break;
//         //                 }
//         //             }
//         //             if(ind) break;
//         //         }
//         //         if(ind) break;
//         //     }
//         //         if(!ind) mx++;
//         // }
//         // for(i=2;i<=n;i++){
//         //     for(j=i;j>=idx;j--){
//         //         if(nf[j].find(i)!=nf[j].end()||nf[i].find(j)!=nf[i].end()){
//         //             //mx=max(i-idx, mx);
//         //             idx=i;
//         //         }
//         //     }
//         // }