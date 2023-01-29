//!instead of trying every single possible combinatino, just count the letters of each sort, if the values correspond, then its good
//https://dmoj.ca/problem/ccc20s3/editorial
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x)// cerr<<#x<<" "<<x<<"\n";
int main(){
    string h, n;
    ll ans=0,i,j;
    cin>>h;
    //~this is the number of times each letters appears in the array
    unordered_map<char, int> count;
    for(i=0;i<h.size();i++){
        count[h[i]]++;
    }
    cin>>n;
    //for every subarray in the larger loop, I am checking and comparing the elements
    // bool ind;
    string tmp;
    set<string> appeared;
    //!I must not count the repetitive subrrays.
        //~faster way, instead of removing the values every time, you can just remove the first and last values, and updates those! you are then running in O(n)
    //substr takes the starting index, and the size of the function.
    //getting the initial state of the array
    tmp=n.substr(0, h.size());

    //i'll keep track of the number of negative letters;
    set<char> negative;
    //gotta loop through the first tmp too, and remove from count!
    bool ind=true;
    //we are looping through h.size(), but are going on the N elements
    for(i=0;i<h.size();i++){
        count[n[i]]--;
        if(count[n[i]]<0){negative.insert(n[i]);ind=false;}
    }
    if(ind) {ans++; appeared.insert(tmp);}

    for(i=0;i<n.size()-h.size()+1; i++){
        // ~I don't even need a copy anymore, since I will be modifying the initial unorderd_map first copy=count; 
        //!omg, no need to fix the entire string again, just change the first and last char
        // for(j=0;j<h.size();j++){
        //     copy[n[j+i]]--;
        //     tmp+=n[i+j];
        //     if(copy[n[j+i]]<0) {ind=false; break;}
        // }
        //remove the first character
            //<index of first element, number of elements;
        debug(tmp)
        tmp.erase(tmp.begin(), tmp.begin()+1);
        count[n[i]]++;
        //if the number is now 0 (went from negative to 0)
        if(count[n[i]]==0) negative.erase(n[i]);


        count[n[i+h.size()]]--; 
        //adding the next element to the current string.
        tmp+=n[i+h.size()];

        if(count[n[i+h.size()]]<0) {negative.insert(n[i+h.size()]); continue;}
        //!my solution exhausted the memory limit (runtime error 6)
            //!I need to find a solution that does not store all the values that appeared into a set
        else if(negative.size()==0 && appeared.find(tmp)==appeared.end()) {ans++; appeared.insert(tmp);}
        debug(ans)
    }
    cout<<ans;
    // do{
    //     for(i=0;i<n; i++){
    //         if()
    //     }
    // }while(next_permutation(h.begin(), h.end()));

    return 0;
}