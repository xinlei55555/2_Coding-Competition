#include <bits/stdc++.h>

using namespace std;

//**NOTE, I DID NOT SUCCEED IN WRITING THIS THINGY

//!another more intuitive approach is--> (but it's like, a triple for loop)
//I basically hide one element at a time, and then, i loop through the entire array as many times as I need without touching that element
    //basically, that would be quite bad, as we would have to remove duplicates.., so i think it was another way. (using recursion)
int main(){
    int n,val;
    vector<vector<int>> answer;
    vector<int> tmp;
    //inputting the array
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){ cin>>val; arr[i];}
    //proceeding
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            for(int k=j; k<n; j++){
                if(k!=i){
                    tmp.push_back(arr[k]);
                }
            }
                    answer.push_back(tmp);
        }
    return 0;
}