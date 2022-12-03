/*
Alternate Solution

We generate the ranking as we read the data.

We can create a 2D array of booleans which states if cow $A$ has a ranking higher than
cow $B$ in any point of time. After reading every ranking, for all $\frac{N(N-1)}{2}$
pairs we set $b[A][B]=\text{true}$.

Then we iterate though all pairs in $\mathcal{O}(N^2)$ time and check if they
satisfy the condition. At least one of $b[A][B]$ and $b[B][A]$ must be true, and
hence we only need to check if they are both true. If one of them is false, we
increment our $\texttt{count}$ by 1. This is because if both are true, then
the pair switches ranking order at some point and is not valid. If only one is true,
then the pair maintained a consistent order.

Note that at least one of them must be true, since in every ranking either $A>B$
or $B>A$.
*/


//!error!!!! some cows can go to some practices, and not go to others..

#include <bits/stdc++.h>
using namespace std;
main(){
    ofstream fout("gymnastics.out");
    ifstream fin("gymnastics.in");
    long long N, K,i;
    //i declared two unordered maps that were going to help me
    unordered_map<long long, set<long long>> ranking, new_ranking;
    fin>>N>>K;  
    long long arr[K]={0};
    //!this cost me 1 hour, but DON"T just randomly remove code, like, this N-- was crucial!!!!
    //ok, first time, i'll save all the possible configurations for the first gym class
    N--;
    for(i=0; i<K;i++) fin>>arr[i];
    for(i=0; i<K;i++){
        ranking.insert({arr[i], {}});
        ////the +1 is so that I don't have repeated elements
        //!I added all the possible pairs of this array into the initial list.
          //  //but the fact that i did +1 messed up everything, because I excluded the last case!
        for(int j=i+1; j<K;j++){    
            //if(arr[j]!=arr[i]){
            (ranking[arr[i]]).insert(arr[j]);
            //}
        }
    }
    //since there are only 10 practice sessions, and twenty cows, i could brute force
        //basically, I am adding elements to the new_ranking (which is basically, a map, containing every element, and the elements that have always been smaller than that element)
    
    while(N--){
        //!HOLY SHIT, it is important that I cin ALL The values of the row, before starting to compare them, since then, it doesn't limit my array
        for(i=0; i<K;i++) fin>>arr[i];
        for(i=0; i<K; i++){
            //not fin>>arr[i] here!
            new_ranking.insert({arr[i], {}});
            for(int j=i+1; j<K;j++){
                if(ranking[arr[i]].find(arr[j])!=ranking[arr[i]].end()) 
                {
                    // fout<<i<<" "<<j<<endl;  
                    new_ranking[arr[i]].insert(arr[j]);
                    // for(auto x:new_ranking) for(auto y:x.second)cout<<x.first<<"-- "<<y<<" | debug ";
                    // cout<<endl<<arr[j]<<" "<<arr[i];
                    // cout<<"\n\n";
                }
                //if(ranking[arr[i]].find(arr[j])==ranking[arr[i]].end())
                
            } 
        }
        //then, I update my values;
        // cout<<"WHUT\n";
        // for(auto x:ranking) for(auto y:x.second)cout<<x.first<<"-- "<<y<<" |";

        ranking=new_ranking;
        // cout<<"HI\n";
        // for(auto x:ranking) for(auto y:x.second)cout<<x.first<<"-- "<<y<<" |";
        
        //cout<<ranking.size()<<endl;
        new_ranking.clear();
    }
    int ans=0;
    for(auto x:ranking) for(auto y:x.second) ans++;
    // fout<<ranking.size(); ==>this just gives me the number of elements
    fout<<ans;
}