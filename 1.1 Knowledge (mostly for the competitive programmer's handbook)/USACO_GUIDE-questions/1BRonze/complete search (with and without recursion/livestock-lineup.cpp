//!faster method: 
    //Note that cows that are not part of any chain can be considered their own chains of length 1 for implementation purposes.
    //With this representation in mind, we can iterate through the cows in lexicographical order. 
    //When we visit a cow that could be a possible start of a chain (a cow that only has one required neighbor), we go through its neighbors, adding cows as we go along, until we hit an end.

#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream cout("lineup.out");
    ifstream cin("lineup.in");

    unordered_map<string, set<string>> matches={
        {"Bessie",{}},
        {"Buttercup",{}}, 
        {"Belinda",{}}, 
        {"Beatrice",{}}, 
        {"Bella",{}}, 
        {"Blue",{}}, 
        {"Betsy",{}}, 
        {"Sue",{}}
    };
    string name, second_name, word;
        //bruh, put them in alphabetical order to start with!!!
    vector<string> answer={"Beatrice","Belinda","Bella","Bessie","Betsy","Blue","Buttercup", "Sue"};
    int n, i;
    cin>>n;
    while(n--){
        cin>>name;
        for(i=0;i<4; i++)cin>>word;
        cin>>second_name;
        matches[name].insert({second_name});
        matches[second_name].insert({name});
    }
    //yea, I can totally just brute force this;
    do{
        bool indicator=true;
        //fixing the problem for the first and last element of the list;
        for(auto y:matches[answer[0]]){if(answer[1]!=y) indicator=false;}
        for(auto y:matches[answer[7]]){if(answer[6]!=y) indicator=false;}
        for(i=1; i<7; i++){
            for(auto y:matches[answer[i]]){
                if(answer[i-1]!=y&&answer[i+1]!=y) {indicator=false;}
            }
        }
        if(!indicator) continue;
        //if it passes through the previous loop, it is the right answer;
        for(auto x: answer) cout<<x<<"\n"; 
        break;
    }while(next_permutation(answer.begin(), answer.end()));

    return 0;
}