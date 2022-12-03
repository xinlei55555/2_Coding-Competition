//! use structures!
#include <bits/stdc++.h>
using namespace std;
struct comput{
    string name;
    int value;

};
bool comp(comput first, comput second){
    //if same value, compare by name
    if(first.value==second.value){
        return (first.name<second.name);
    }
    //return the largest value;
    return (first.value>second.value);
}
int main(){
    int N, c,d,s;
    cin>>N;
    vector<comput> data(N);
    for(int i=0; i<N; i++){
        cin>>data[i].name>>c>>d>>s;
        data[i].value=2*c+3*d+s;
    }
    //!always read question for exceptions:
    if(data.size()==0) return 0;
    if(data.size()==1) {cout<<data[0].name; return 0;}


    sort(data.begin(), data.end(),comp);
    for(int i=0; i<2;i++){
        cout<<data[i].name<<"\n";
    }
    return 0;
}



//!-0000000000000000000000000
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string name;
//     map<int, set<string>> elements;
//     //!max is 0!!!!!!!
//     int n, r,c,d,mx=std::numeric_limits<int>::min(),curr, mx2, tmp;
//     vector<int> specs;
//     vector<string> names;
//     cin>>n;
//     if (n==1) {cin>>name>>r>>c>>d; cout<<name; return 0;}
//     while(n--){
//         cin>>name>>r>>c>>d;
//         curr=curr=2*r+3*c+d;
//         // so no duplicates:
//         if(elements.find(curr)!=elements.end()){
//             elements[curr].insert(name);
//         }
//         else elements.insert({curr, {name}});
//         specs.push_back(curr);
//     }
//     sort(specs.begin(), specs.end(), greater<int>());
//     //!i love sets, they are already sorted in lexicographical order!
//     for(int i=0; i<2; i++){
//         int j=0;
//         for(auto x:elements[specs[i]])
//         //!ok lol, I am breaking after the fist element
//         {cout<<x<<"\n"; j++;{if(j==1) break;}}
//     }
    
    // while(n--){
    //     cin>>name>>r>>c>>d;
    //     curr=2*r+3*c+d;
    //     //cout<<curr<<"\n";
    //     tmp=mx;
    //     mx=max(curr, mx);
    //     if(curr==mx){best.insert({name, mx});for(auto x:best){ if(x.second==mx2) best.erase(x.first); }mx2=tmp; continue;}
    //     mx2=max(curr, mx2);
    //     if(mx2==curr) {for(auto x:best) {if(x.second!=mx2&&x.second!=mx) best.erase(x.first); }best.insert({name, curr});}
    //     //we want the top two!
    // }
    // //cout<<best.size();
    // if(mx2==mx) {for(auto x:best) cout<<x.first<<"\n"; return 0;}
    // for(auto x:best) if(x.second==mx) cout<<x.first<<"\n";
    // for(auto x:best) if(x.second==mx2) cout<<x.first<<"\n";
//     return 0;
// }