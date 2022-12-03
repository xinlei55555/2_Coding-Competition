#include <bits/stdc++.h>
using namespace std;

vector<unordered_set<char>> spot, plain;

bool check(unordered_set<char> hi, char i){
    for(auto j:plain[i]){
            cerr<<j<<" ";
            //no! I want EVERY value to be false, not just one.
            if(hi.find(j)!=hi.end()) {return false;}
    }
    return true;
}

int main(){
    ifstream fin("cownomics.in");
    ofstream cout("cownomics.out");
    int N,M;
    fin>>N>>M;
    unordered_set<char> data;
    int i,j,ans=0;
    char a;
    //!ok damn, wrong logic, i must first input one element of the unordered char at a time.... (so that I have the right number of sets)
    for(i=0;i<M;i++){
        fin>>a;
        data.insert(a);
        spot.push_back(data);
        data.clear();
    }
    for(i=1; i<N; i++){
        for(j=0; j<M; j++){
            fin>>a;
            spot[j].insert(a);
        }
    }
    for(i=0;i<M;i++){
        fin>>a;
        data.insert(a);
        plain.push_back(data);
        data.clear();
    }
    for(i=1; i<N; i++){
        for(j=0; j<M; j++){
            //!omg, I forgot to fin again TT
            fin>>a;
            plain[j].insert(a);
        }
    }
    
    for(i=0;i<spot.size();i++){
        ans+=check(spot[i], i);
        cerr<<"\n";
    }

    cout<<ans;
    return 0;
}
    
//         for(int i=1; i<N;i++)
        
//         for(j=0;j<N;j++){

//             data.insert(a);
//         }
//         spot.push_back(data);
//         data.clear();
//     }
//     for(i=0;i<N;i++){
//         for(j=0;j<M;j++){
//             fin>>a;
//             data.insert(a);
//         }
//         plain.push_back(data);
//         data.clear();
//     }
//     for(i=0;i<spot.size();i++){
//         for(auto j:spot[i]){
//             if(plain[i].find(j)==plain[i].end())ans++;

//         }
//     }
    
//     cout<<ans; 
//     return 0;
// }
//     for(i=0; i<N;i++){
//         for(j=0;j<M;j++){
//             fin>>a;
//             tmp.push_back(a);
             
//         }
//     }
// //!ok, so my code doesn't work, obviously, since I should, instead, input a list, and then treat the list
//     for(k=0;k<M;k++){
//         for(i=0;i<N;i++){
//             for(j=0;j<M;j++){
//                 fin>>a;
//                 spot.insert(a);

//             }
//         }
//         for(i=0;i<N;i++){
//             for(j=0;j<M;j++){
//                 fin>>a;
//                 none.insert(a);     
//             }
//         }
//         i=0;
//         for(auto x:spot){if(i=N-1){ans++;}i++; } 
//         spot.clear();
//         none.clear();  
//     }
