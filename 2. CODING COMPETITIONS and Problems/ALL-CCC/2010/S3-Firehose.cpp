#include <bits/stdc++.h>

using namespace std;
//~https://www.youtube.com/watch?v=3iEwhSSz73o&ab_channel=CodingPalsFoundation
//i'll create a function that calculates if it is possible to traverse every single house only with the given length of the hose.   
    //basically, I start at each house, then, the range of a hose to a house is "a". I check the coverage, for EVERY house, of 2 a, before placing the next hose at the next house that was not covered.
        //if by the end of the cycle, every house was covered by the hydrants, then the whole length was correct.
//!array that contains all the houses in the map.
vector<int> val;
int h,k,j, fire;

bool covers(int len){
    //looping through every house
    int curr, used;
    
    // cerr<<"hI";
    //!never reuse the same variables again and again!
    for(int i=0;i<val.size();i++){
        j=i;
        //start at 1, he initially uses a fire hose!
        used=0;
    //! NO YOU DON"T WANNA HAVE ONE MORE. (Since there is a possibility that the hose must be placed exactly on the house, and then, if you add 1, then it weirds out, because the next house is technically covered by one more.)
        //i want curr to be 1 more than the double of the length that I established earlier
        curr=(val[i]+(len*2));
        while(j<val.size()+i){
            //looping in a circle
            if(used==fire){return true;}
            if(val[j%val.size()]<=curr) j++;
            
            else {curr=val[j]+(len*2); used++;}
        } //if everything was passed -- in fact, i only need one to work!
        return false;
    } 
    
}

int main(){
    cin>>h;
    //also, prevent the case where there are less than 1 test cases 
    if(h<=1){cout<<0; return 0;} 
    //basically, every time there is a house, the number on the array will be 1.
    for(int i=0;i<h;i++){
        cin>>k;
        val.push_back(k);
    } sort(val.begin(), val.end());
    cin>>fire;
    //for(auto x: val) cout<<x;
    //!solution, run a binary search, for every possible length of water hose possible
        //I start with the smallest possible length, and try every single value in the data set
    int len=500000;
    //never need more than 500 000
    k=250000;
    int idx=1;
    //i is the index of the current element, 
        //k is half of the current size
    //basically binary search.
        //~fix binary search, something suble... (replace by a loop to check if the function covers itself works.)
//! my binary search sucks.
    // while(k>=0){
    //     //len is the answer!
    //         //len is doubled! (since here< i am covering from one house to another)
    //     if(k==0 && !covers(len)) {cout<<(len); break;}

    //     //if true, i need a longer 
    //     if(covers(len)) {idx=1;}
    //     else idx=-1; 
    //     len+=(k*idx);

    //     //!don't add 1 to k before dividing it by 2, or else, you will be skipping many values!
    //     k=floor((k)/2);
    //     cout<<len<<"\n";//hose, if false, I need a shorter hose.
    //     if(covers(len)) {idx=1;}
    //     else idx=-1; 
    //     len+=(k*idx);

    //     //!don't add 1 to k before dividing it by 2, or else, you will be skipping many values!
    //     k=floor((k)/2);
    //     //cout<<len<<"\n";
    // }

//!Ok, here I got lazy, and i was running my loop, for every single value.
    // for(int i=0; i<1000000; i++){
    //     if(!covers(i)) {cout<<i<<"\n";break;}
    // }
     
    return 0;
}


//!ok, this solution was thought of a bit too fast, and did not take into account certain aspects of the 
/*
int main(){
    int i,h,k,j;
    cin>>h;
    // an array that contains the max, and the maximal values for each 
    int val[h], mx[h]={0};
    if(h<=1){cout<<0; return 0;} 
    for(i=0;i<h;i++){
        cin>>val[i];
    } 
    //!never assume the dataset provided willbe sorted for you!
        //also, prevent the case where there are less than 1 test cases 
    sort(val, val+h);
    //for(auto x: val) cout<<x;

    for(i=0;i<h;i++){
        for(j=i+1;j<h;j++){
                //i forgot to take care of the other way around, where it goes from 0, and goes backwards
            mx[i]=max(mx[i], min(val[j]-val[i], 1000000-(val[j]-val[i])));
            //stop the loop if it starts decreasing
            if(mx[i]==val[j] && val[j+1]<val[j]) break;
        }
    }
    int n;
    cin>>n;
    sort(mx, mx+h, greater<int>());
    //for(auto x:mx) cout<<x;
    
    cout<<mx[n-1]/2;

    return 0;
}
*/