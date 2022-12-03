//!A prefix code is a type of code system distinguished by its possession of the "prefix property", which requires that there is no whole code word in the system that is a prefix of any other code word in the system. It is trivially true for fixed-length code, so only a point of consideration in variable-length code.
#include <bits/stdc++.h>
using namespace std;
// struct code{
//     string sequence;
//     char c;
// };
int main(){
    int i, k;
    char c;
    string sequence, tmp;
    cin>>k;
    //!i'll use an unordered map over a structure, since I can retrieve the values in unordered maps more easily, although I should learn how to find element in sets of structures
    unordered_map<string, char> code;
    while(k--){
        cin>>c>>sequence;
        code.insert({sequence, c});
    }
    while(cin>>c){
        tmp+=c;
        if(code.find(tmp)!=code.end()){
            cout<<code[tmp];
            tmp.clear();
            
        }
    }

//!that code, with structure, also works!
    //vector<code> data(k);
    // for(i=0;i<k;i++){
    //     cin>>data[i].c>>data[i].sequence;
    // }

    // //getting the sequence
    //     //!possible error, since I am finding the value as soon and replacing as soon as possible, there is a possibility that i do NOT input the right thing, which means that my string will not vend at the right size
    //         //false!, since we are in a prefix free situation
    //         //thus, I should keep my vales in order
    // string final;
    // cin>>final;
    // for(auto x:final){
    //     tmp+=x;
    //     //if(code.find(tmp)!=code.end()){
    //     for(i=0; i<k; i++){
    //         if(data[i].sequence==tmp){
    //             // cout<<"HI";
    //             cout<<(data[i].c);
    //             tmp="";
    //             break;
    //         }

    //     }
    // }

    return 0;
}