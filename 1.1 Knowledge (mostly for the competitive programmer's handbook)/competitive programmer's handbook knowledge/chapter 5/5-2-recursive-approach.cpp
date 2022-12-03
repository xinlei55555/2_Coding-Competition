#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<vector<int>> answer;
vector<int> subset;

void search(int k){
    if(k==arr.size()){
        cout<<
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int val;
//inputing the array
    while(cin>>val){
        arr.push_back(val);
    }

    //basically, I call search from the first element
    search(0);

    
    return 0;
}