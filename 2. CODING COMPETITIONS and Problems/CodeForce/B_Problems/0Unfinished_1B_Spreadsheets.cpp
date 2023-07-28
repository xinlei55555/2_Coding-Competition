//somehow there is a way to cast values from letters to int, in c++!!!!
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    return 0;
}


//-----------------------------------
    //didn't use casting... TT
// int main(){
//     vector<int> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
//     int n;
//     string value, answer;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>value;
//         auto x = find(alphabet.begin(), alphabet.end(), 'R');
//         auto y = find(alphabet.begin(), alphabet.end(), 'C');
//             //basically, that the format is 
//                 //R<int row>C<int column>
//         //converting an iterator to int
//         if(x!=alphabet.end() && y!=alphabet.end() && x+1!=y){
//             int index = std::distance(alphabet.begin(), y);
//             int row = stoi(answer.substr(1, index+1));
//             int column = stoi(answer.substr(index+1, answer.size()));
//             //column letter:
//             column/26
//             answer.push_back(alphabet[column%26])
//             //OK am tired, but basically yea... just add letters based on the stuff. it's just annoying
//         }    
//     }
//     return 0;
// }