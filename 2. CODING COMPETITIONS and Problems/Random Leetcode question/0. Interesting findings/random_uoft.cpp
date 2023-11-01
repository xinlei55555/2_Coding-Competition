#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr, rating; int n;

    int i=0;
    int answer=1, previous = 1;
    while(cin>>n){
        rating.push_back(n); 
        cerr<<"iteration "<<i<<" "<<n<<"\n";
        if(i==0) {i++;continue;}
        if(rating[i-1] == n) {previous=1; answer++;}
        else if(rating[i-1]<n){
           previous ++;
            answer+=previous;
            cerr<<"hi ";
        }
        else{
            if(previous == 1) {answer+=(i+1); previous = 1;}
            else {previous--; answer+=previous;}
            cerr<<"hello ";
        }
        cerr<<answer<<"||"<<previous<<"\n";
        i++;
    }
    cout<<answer;
    return 0;

}