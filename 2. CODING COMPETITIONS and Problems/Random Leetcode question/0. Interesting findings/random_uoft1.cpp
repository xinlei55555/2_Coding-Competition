#include <bits/stdc++.h>
using namespace std;

int main(){
    string pattern; 
    cin>>pattern;
    bool same = true;
    string word;
    cin>>word;
    string previous = word;
    int i=1;
    while(cin>>word){
        // cerr<<previous<<" " <<word<<"\n";
        if(pattern[i]==pattern[i-1] && previous != word) {same = false;}
        if(pattern [i]!= pattern[i-1] && previous == word) same = false;
        previous = word;i++;
    }
    cout<<same<<"\n";
    return 0;
}