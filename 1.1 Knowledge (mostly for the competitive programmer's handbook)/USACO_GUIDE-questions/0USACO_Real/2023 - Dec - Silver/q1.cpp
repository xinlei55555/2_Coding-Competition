#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

struct Cow{
    ll w, a;
};

bool cmp(Cow a, Cow b){
    return a.w>b.w;
}

int main(){
    ll n, m, k;
    cin>>n>>m>>k;
    vector<Cow> cows(n);
    //input
    for(int i=0;i<n;i++){
        cin>>cows[i].w>>cows[i].a;
    }
    //sorting in decreasing order.
    sort(cows.begin(), cows.end(), cmp);
    
    //number of cows that are used
    ll answer = 0;

    //stores the cows that are in the towers (the topmost <cow weight, num cows>)
    vector<pair<ll, ll>> current = {{m, 10e9}};

    //numbers of towers left at a certain point
    // set<ll> towers_left = {10e9}
//!I should improve upon the time complexity. Maybe, instead of searching, I should just use a queue and store the last M
    //for each cow weight:
    // ll check=0;
    for(int i=0;i<n;i++){
        //yes, maybe try to skip some if none work
        

        ll number = m;
        //for each cow in the list, use the largest number cows at the bottom
        pair<ll, ll> to_push = {0, cows[i].w};

        //making sure that each cow added is bigger by k
        ll check = current.size()-1; // the index in the list of the largest element in the stack
        
        while(number>0 and check<=current.size()-1){
            //if the difference is too small, then go to the previous one
            if(current[check].second - cows[i].w < k){
                number -= current[check].first;
                
                check--;
                // check ++;
            }
            //if the difference is big enough

            //if the difference with the last value in the list is big enough, you can assume you can add as many as m
            else{
                to_push.first += min(number, cows[i].a);
                ll check = current.size()-1; //\
                //here you should remove those cows.

                break;
            }
        }

        //saving the current cow weights 
        current.push_back(to_push);
        answer += to_push.first;
        
        debug(answer)
        debug(cows[i].w)
        // debug(number)

        // number = max(number, 0LL);
        // number += m;
    }
    cout<<answer<<'\n';
    return 0;
}


