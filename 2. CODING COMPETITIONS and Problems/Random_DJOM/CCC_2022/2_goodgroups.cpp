//!whole new logic, i'll be using unordered maps with a set as element
    //aditionally, i will reciprocaclly be pushing values, meaning that a -> b, but also b  -> a
#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    unordered_map<string, set<string>> a;
    unordered_map<string, set<string>> not_a;
    // unordered_map<string, set<string>> a;
    // unordered_map<string, set<string>> not_a;
    set<string> tmp;
    int i, j, k, ans=0;
    string s, s1, g[3]; 
    for(cin>>i; i--;){
        cin>>s>>s1; 
        //!empty() for sets tells IF the set is empty (by returning 0 or 1), while erase removes the values from a set
        // tmp.clear();
        // if(a.find(s)!=a.end()){
        //     tmp=a.at(s);
        // }
        // tmp.push_back(s1);
        // a.insert({s, tmp});

        // tmp.clear();
        // if(a.find(s1)!=a.end()){
        //     tmp=a.at(s1);
        // }
        // tmp.push_back(s);
        // a.insert({s1, tmp});
        if(a.find(s)!=a.end()) a[s].insert(s1);
        else {tmp.clear(); tmp.insert(s1);a[s]=tmp;}

        if(a.find(s1)!=a.end()) a[s1].insert(s);
        else {tmp.clear(); tmp.insert(s);a[s1]=tmp;}
    }
    for(cin>>j; j--;){
        cin>>s>>s1;
        //!the reason why I will NOT insert twice, is because, if, when checking, this rule is indeed infringed, i DONT need to check it again for the other !
        if(not_a.find(s)!=not_a.end()) not_a[s].insert(s1);
        else {tmp.clear(); tmp.insert(s1);not_a[s]=tmp;}
        // cin>>s>>s1;
        // tmp.clear();
        // if(not_a.find(s)!=a.end()){
        //     tmp=not_a.at(s);
        // }
        // tmp.push_back(s1);
        // not_a.insert({s, tmp});
        // //inserting the same for s1 too
        // tmp.clear();
        // if(not_a.find(s1)!=not_a.end()){
        //     tmp=not_a.at(s1);
        // }
        // tmp.push_back(s);
        // not_a.insert({s1, tmp});
    }
    for(cin>>k; k--;){
        cin>>g[0]>>g[1]>>g[2];
        for(int i=0; i<3; i++){
            if(a.find(g[i])!=a.end()){
                //!lesson 1: if anyways, I am going to loop through the set, might as well have used an array!
                    //!Lesson 2; Why do you wanna removee?
                for(auto y: a[g[i]]){
                  //  for(auto x:y){
                         if(find(begin(g), end(g), y)==end(g)){
                        //if it infringes the fact that both have to be in the same, it means that the second element is NOT in the array. NO need to go and remove it!
                        ans++;
                        //cout<<"BRUH "<<y<<endl;
                        
                        //!huh, this is how I erase!
                        a[y].erase(a[y].find(g[i]));

                        //not like this:
                            //this would remove the ENTIRE SET, not just the element in the set 
                        //a.erase(a.find(y));
                            
                        // // I also gotta remove those values when I am done with them!
                        // //i will also find the value itself

                        // //before erasing, I should make sure the values exist!
                        // auto itr = find(a[x].begin(), a[x].end(),g[i]);//itr2=find(a[g[i]].begin(), a[g[i]].end(),x);
                        //!you can't erase like that! itr is an iterator, and doesn't represent anything outside of the context of the loop! You have to find again to remove
                        // if(itr!=a[x].end()) a[x].erase(itr);
                        // // if(itr2!=a[g[i]].end()) a[g[i]].erase(itr2);
                  //  }
                    }
                   
                }
            }
            if(not_a.find(g[i])!=not_a.end()){
                for(auto y: not_a[g[i]]){
                  //  for(auto x:y){
                        if(find(begin(g), end(g), y)!=end(g)){
                        ans++;
                        //cout<<"HI "<<y<<endl;
                        // auto itr = find(not_a[x].begin(), not_a[x].end(),g[i]); //itr2=find(not_a[g[i]].begin(), not_a[g[i]].end(),x);
                        // if(itr!=not_a[x].end()) not_a[x].erase(itr);
                        // // if(itr2!=not_a[g[i]].end()) not_a[g[i]].erase(itr2);
                    //    }
                    }
                    
                }
            }  
        }
    }
    cout<<ans;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// //! this number was all about knowing how to store everthing and looping back to fetch the information correctly.
// int main(){
//     int x, n,z, ans=0;
//     string s, s1, s2;
//     //they said I had to use unordered_set
//     unordered_map<string, string> a;
//     //I'll be using an unordered_multimap (which supports equivalent)
//         // or just a 
//     unordered_map<string, string> not_a;
//     //when there are less than 3 elements, the unordered sets are always slower.
//     // unordered_set<string> g;

//     //declare the right data type
//     string g[3];
//     // a.empty(); 
//     // not_a.empty();

//     for(cin>>n; n--;){
//         cin>>s>>s1;
//         // I am making sure that I am able to include equivalent values, so values with the same keys, in different orders
//         if(a.count(s)==0) a.insert({s, s1});
//         else a.insert({s1,s});
//         //Here, I am inserting both of the possibilities into the map
//         //a.insert({s1, s});
//     }
//     for(cin>>x; x--;){
//         cin>>s>>s1;
//      //here, an exception would occur if I am trying to include the same key, with different elements
//         if(not_a.count(s)==0) not_a.insert({s, s1});
//         else not_a.insert({s1,s});
     
//         //not_a.insert({s1, s});
//     }

//     for(cin>>z; z--;){
//         cin>>g[0]>>g[1]>>g[2];
//         //! huhhh, I got it! we just have to push the first version of the pair, but also the reverse pair, since I can only access (I would push, for {s, s1} AND {s1, s})
//         for(int i=0; i<3; i++){
//             if(a.count(g[i])!=0&&find(begin(g), end(g), a.at(g[i]))==end(g)){ans++; a.erase(g[i]);}
//             if(not_a.count(g[i])!=0&&find(begin(g), end(g), not_a.at(g[i]))!=end(g)) {ans++; not_a.erase(g[i]);}
//         }        
//     }
//     cout<<ans;

//     return 0;
// }




//         //~humm... logic error, maybe I should loop through the unordered map and check for the elements inside the map, vs loop through the three elements 
//             //like, in my case, I would be looping through the whole map for EVERY element...
//         // string bad ="";
//         // for(auto x:a){
//         //     for(int i=0; i<3; i++){
//         //         if(x.first==g[i]) {
//         //             if(find(begin(g), end(g), x.second)==end(g)){
//         //                 ans++;
//         //                 bad=x.first;
//         //             }
//         //         }
//         //         else if(x.second==g[i]){
//         //             if(find(begin(g), end(g), x.first)==end(g)){
//         //                 ans++; 
//         //                 bad=x.first;
//         //             }
//         //         }
//         //     }
//         // }
//         // a.erase(bad);
//         // bad = "";
//         // for(auto x:not_a){
//         //     for(int i=0; i<3; i++){
//         //         if(x.first==g[i]) {
//         //             if(find(begin(g), end(g), x.second)!=end(g)){
//         //                 ans++;
//         //                 bad=x.first;
//         //             }
//         //         }
//         //         else if(x.second==g[i]){
//         //             if(find(begin(g), end(g), x.first)!=end(g)){
//         //                 ans++; 
//         //                 bad=x.first;
//         //             }
//         //         }
//         //     }
//         // }
//         // not_a.erase(bad);
//         // bad="";
//         // for(int j=0; j<3; j++){
//         //         //i will be deleting that string
//         //     string bad = "";

//         //         //I am using the find function for the array
//         //             //I am looking for if the value at the given index map is present in the small array I have.
//         //     //!I am looking for if the key exists. I must also look for the element! (the second value in the pair)
//         //     if(a.count(g[j])!=0 && find(begin(g), begin(g)+3, (a[g[j]]))==end(g)){ ans++; bad = g[j];}
//         //     for(auto itr: a){
//         //         //here, the itr is the OBJET ITSELF! (not a pointer)
//         //         if(itr.second == g[j] && find(begin(g), begin(g)+3, (itr.first))==end(g)){ ans++;bad = itr.first;}
//         //     }
//         //     if(bad!=""){a.erase(bad); bad="";}
//         //     //cerr<<"1HI"<<ans<<"\n";
//         //         //I erase the value after it was failed, to remove it frmo the test cases 
//         //     //!error, I have to be able to retrieve the second value as well, since both values simply cannot coexist together.
//         //     if(not_a.count(g[j])!=0&&find(begin(g), end(g), not_a[g[j]])!=end(g)) {ans++; bad = g[j]; }
//         //     for(auto itr: not_a){
//         //         //cout<<"HI";
//         //         if(itr.second==g[j]&&find(begin(g), end(g), itr.first)!=end(g)) {ans++;bad = itr.first ;}
//         //     }
//         //     if(bad!=""){not_a.erase(bad); bad="";}
//         //     //cerr<<"2HI"<<ans<<"\n"; 
//         // }                        
