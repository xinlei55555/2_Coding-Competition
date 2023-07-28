#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,a;
    //cin>>s>>a;

      ofstream fout ("censor.out");
    ifstream fin ("censor.in");
    fin>>s>>a;
    //!ok, this solution is too slow. I am running, and looking for the same string, over and over again.
/*
    while(true){
        //*to erase a specific length for a substring, just write beginning (find(), and the end point find()+a.size()  
        //*if(s.find(a)!=string::npos&& s.find(a)+a.size()<s.size()) s.erase(s.begin()+s.find(a),s.begin()+s.find(a)+a.size());
        //!OR
            //!both do the same thing
        auto x=s.find(a);
        if(x!=s.npos && x+a.size()<s.size()) s.erase(x,a.size());

        else break;
    }


*/
    //!here is a better solution
        //I input one character at a time for the ans, if the last few characters are the same as the substring we are trying to delete, remove these charactesr
    string ans="";
    int asize=a.size();
    for(auto x: s){
        ans+=x;
        if(ans.size()>=asize&&ans.substr(ans.size()-asize)==a ){
            //the thing with ans.substr, is that it is slower, since there is a reallocation of memory (the variable is reallocated)
            //ans=ans.substr(0, ans.size()-asize);
            ans.resize(ans.size()-asize);
        }
    }

    fout<<ans;
    return 0;
}