#include <bits/stdc++.h>
using namespace std;
//!ok, so here, I only have like, 4 different cards, and like, 4 operations, making the running time of this 5^4 time
array<int, 4> cards;
int ans;
void op(int res, int k){
    //cerr<<"HI"<<res<<k;
    //!no, since a value can go beyond 27, before going back down!
        //if(res>24) return;
    // if(res>37) return; //just to save some time ;)
    if (k==3){ 
        if(res<=24) ans=max(ans, res);
        return;
    }
    op(res+cards[k+1], k+1);
    op(res-cards[k+1],k+1);
    if(res%cards[k+1]==0) op(res/cards[k+1],k+1);
    op(res*cards[k+1], k+1);

    if(k<=1){
        op(res*(cards[k+1]-cards[k+2]), k+2);
        op(res*(cards[k+1]+cards[k+2]), k+2);
        //I also gotta make sure that I am not dividing by 0, when I am doing %
        if(cards[k+1]-cards[k+2]!=0&&res%(cards[k+1]-cards[k+2])==0) op(res/(cards[k+1]-cards[k+2]),  k+2);
        if(res%(cards[k+1]+cards[k+2])==0) op(res/(cards[k+1]+cards[k+2]),  k+2);
    }
}


int main(){
    int N,i,k;
    cin>>N;
    //!for std array, we cannot use a variable to declare the array size!
        //i'll just run my program for every hand!
    for(i=0;i<N;i++){
        //~source of error: answer can be a negative number, so maybe not set it at 0 to start
        //input current four cards
        for(int j=0;j<4;cin>>k, cards[j++]=k);
        //time to run recursion for each permutations of the four cards in the game;
        do{
            //I used to loop through ALL the elements in the cards... didn't work.!?
            op(cards[0],0);
    // //!I found the error, In fact, with this code, i don't cover the times where ((a*b)+(c*d)), where 
    //         //in fact, that is why i'll be running these lines of code
    //         op(cards[0]+cards[1], 1);
    //         op(cards[0]-cards[1],1);
    //         if(cards[0]%cards[1]==0) op(cards[0]/cards[0],1);
    //         op(cards[0]*cards[1],1);
        }while(next_permutation(cards.begin(), cards.end()));
        cout<<ans<<"\n";
        ans=0;
    }

    return 0;
}