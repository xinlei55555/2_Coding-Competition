#include <bits/stdc++.h>
using namespace std;
int main(){
    //If one day I needed, another better algorithm to fill a prefix sum would be
    //int n=sizeof(arr)/sizeof(int)+1;
    int n; cin>>n;
    //!note, when I use n, instead of a fixed value, everything getts messed up, and it doesn't necessarily start at 0...
        //!use vector instead.
    char c;//int arr[5][5]={0}; 
    //array<array<int, 5>, 5> arr ={{0}};
    vector<vector<int>> arr(n+1, vector<int> (n+1, 0));


//!the prefix sum value of any square is defined as the number of elements from the points (0,0) to the points (i,j)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c;
            //meaning that it is not at the bottom row!
            //The function takes a 2D array as input and returns the corresponding 2D prefix sum array. The outer loops iterate over the rows and columns of the array, and the inner loop calculates the prefix sum for each element by summing its value, the value above it, the value to the left of it, and subtracting the value at the top-left corner.
            //first, I add the sum of the corresponding square
            arr[i][j]+=(c=='*'? 1:0);

            //I derived this function in my yellow notes.
            arr[i][j]+= (arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]);
        }
    }
    for(int i=0;i<=n; i++){
        for(int j=0;j<=n;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }


    return 0;
}