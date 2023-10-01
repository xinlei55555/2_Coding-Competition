#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

bool cmp(string a1, string a2){
    return a1.size()<a2.size();
}

//use dynamic programming.
int main(){
    vector<string> num = {"seven", "four", "six", "eight", "three", "nine", "five", "zero", "one", "two"};//, "sevenine", "eighthree", "twone", "oneight", "oneighthree", "zerone", "zeroneight", "zeroneighthree", "fiveeight", "fiveighthree" }
    int val=9302023;
    string st;
    // char a;
    cin>>st;
    vector<string> strings = {st}, copy = {st};

 
    for(int i=0;i<num.size();i++){
        // string s=st;
        for(auto s:strings){
            size_t found = s.find(num[i]);
            string tmp = " ";
            while(found !=string::npos){
                tmp=s.erase(found, (num[i].size()));
                tmp.insert(static_cast<int>(found),1, '1');
                // tmp.insert()
                found = s.find(num[i]);
            }
            if(tmp!=" ") copy.push_back(tmp);
        }
        strings = copy;
    }
    for(auto x: strings) {debug(x)}

    sort(strings.begin(), strings.end(), cmp);
    ll mn = strings[0].size(); int ans=0;
    for(int i=0;i<strings.size();i++){
        if(strings[i].size()<=mn) ans++;
        else break;
    }

    cout<<mn<<"\n"<<ans % val;
    return 0;
}