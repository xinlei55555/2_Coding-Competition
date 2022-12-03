//great article I found online, which details how to generate all possible permutations
//https://www.codesdope.com/blog/article/generating-permutations-of-all-elements-of-an-arra/

#include <bits/stdc++.h>
using namespace std;
vector<int> comb;
int n,i,j, start, end;


// //permutation function
// void combination(vector<int> comb, int start, int end)
// {
//     if(start==end)
//     {
//         for(auto x: comb) cout<<x;
//         return;
//     }
//     for(i=start;i<=end;i++)
//     {
//         //swapping numbers
//         swap((comb[i]), (comb[start]));
//         //fixing one first digit
//         //and calling permutation on
//         //the rest of the digits
//         combination(comb, start+1, end);
//         swap((comb[i]), (comb[start]));
//     }
// }
int main(){
    cout<<"how many elements\n";
    cin>>n;
    int arr[n];
    for(j=0; j<n; cin>>arr[j++])comb.push_back(arr[j]);

    cout<<"Hi"<<comb.size()<<"\n";
    combination(comb, 0, n-1);

    //!---------
        //~second method: using the automatic permutation creator...
    vector<int> permutation;

    do {
        for(auto x: permutation) cout<<x;
    } while (next_permutation(permutation.begin(),permutation.end()));

    return 0;
}