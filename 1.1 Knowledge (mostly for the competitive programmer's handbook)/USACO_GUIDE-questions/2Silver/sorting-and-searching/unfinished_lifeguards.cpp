//         //**!!**!*!OK! trick , here, each cow, instead of considering it per cow, we can consider it as 
        //each cow is a start event, and an end event!
        //so you store the start events and end times SEPARTELY.
    //okay, so yea, at each point in time, you track which lifeguards are working.
    //if only one of them is working, then track the time for this one inside of a map
        //then, the minimum that any one of them works alone is the one that you can remove

    //notice the quantity of comments
    //When having a lot of values to store, create a structure. This can help you store start time, end time, and cow_id, and the cow id is just their position inside of a list.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

struct Event{
    ll time;
    ll
}

int main(){

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// struct Cow{
//     int start, end, id;
// }

// bool comp(Cow a, Cow b){
//     return a.start<b.start;
// }

// int main(){
//     ofstream cout("lifeguards.out");
//     ifstream cin("lifeguards.in");
//     ll n; cin>>n;
//     vector<Cow> cows(n), aloneTime(n, 0);
//     unordered_set<Cow> working;

//     for(int i=0;i<n;i++){
//         cows[i].id = i;
//         cin>>cows[i].start>>cows[i].end;

//     }

//     sort(cows.begin(), cows.end(), comp);

//     //id of the previous, and max time, and the second to last last time.
//     // vector<ll> previous = {0, cows[0].end, cows[0].start};

//     //!no need, I just need to take into account the last "event" and keep an interval of time...

//     //!wait a second, but I have to take into account that the cows also start at a different time...

//     ll total_worked = 0;

//     for(int i=1;i<n;i++){
//         working.insert(cows[i]);
        
//         if(cows[i].start>previous[1]) aloneTime[previous[0]] += previous[1] - previous[2];

//         if(previous[1] == cows[i].end){
//             previous [2] = cows[i].end;
//         }
//         ll tmp = previous[1];
//         previous[1] = max(cows[i].end, previous[1]);
//         if(previous[1]!= tmp) previous[2] = tmp;
//         previous[0] = (cows[i].end>previous[1]) ? cows[i].end: previous[1];


//     }
//     return 0;
// }