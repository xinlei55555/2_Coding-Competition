//ok, I am going to try to implement the recursive and bitwise algorithms that he described in the book.

/* //!It's very simple to do this recursively. The basic idea is that for each element, the set of subsets can be divided equally into those that contain that element and those that don't, and those two sets are otherwise equal.

!For n=1, the set of subsets is {{}, {1}}
!For n>1, find the set of subsets of 1,...,n-1 and make two copies of it. For one of them, add n to each subset. Then take the union of the two copies.
!Edit To make it crystal clear:

    /*The set of subsets of {1} is {{}, {1}}
    For {1, 2}, take {{}, {1}}, add 2 to each subset to get {{2}, {1, 2}} and take the union with {{}, {1}} to get {{}, {1}, {2}, {1, 2}}
    Repeat till you reach n */
    
    //when he says "add the elements together", he just means, to put them all into a common vector!
#include <bits/stdc++.h>

using namespace std;

//~ this is a clean implementation, the thought process is behind, and is in int main_old()
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int val, temp_size;

    vector<int> arr, temp={};

//for answer, I can start with an empty vector
    vector<vector<int>> ans={{}};

//cin initial array
    while(cin>>val){
        arr.push_back(val);
    } 
    cout<<"input size is "<<arr.size()<<"\n";
    
//generate subset (see under for explanation)
    for(int i=0; i<arr.size(); i++){
        //here, I made the decision to push the temporary
        temp_size=ans.size();
        for(int j=0; j<temp_size; j++){
            temp = ans[j];
            temp.push_back(arr[i]);
            
            //process subset (I am printing it)        
            ans.push_back(temp);
            for(auto x:temp) cout<<x<<" ";
            cout<<"\n";
        }
    }

    return 0;
}




//~old implementation:


// //i believe n is the number of elements that we will try to loop for.
// int a[1]={1};
// int a1[3]={1,2,3};
// int a2[5]={1,2,3,4,5};

// //you gotta initialize an EMPTY vector, to be able to push_back stuff
// vector<vector<int>> ans={};
// vector<int> tmp={};
// int tmp_size;
// //n will just be the size of the array i will try to loop for
// int n=sizeof(a)/sizeof(int);

// void subset(int n){
//     cout<<"hi";
// }
// int main_old(){
//     // ios_base::sync_with_stdio(0);
//     // cin.tie(0);
//     //here are a few tests that I want to run.
//     subset(n);

//     vector<int> hi={};
//     vector<int> hello=hi;
//     // this doesn't work, as calling the 0th element of an empty array is impossible...
//     cout<<hello.size();

// //*this runs in O(2^n), since I am constantly adding new elements to be run over again, and for every element that I add, I gotta pass over it twice (one by adding it, and once by passing over it again)
//     //! i'll try to do it iteratively
//     //I start by adding the 0th element, which is an empty array, as well as the first element
//         //this is WRONG, make sure that ans is at least ans={}!!!!!!!
//     ans.push_back({1});
//     // cout<<ans[0][0];
//     // ans.push_back({a2[0]});
//     //here I am looping through the initial array
//     for(int i=1; i<sizeof(a2)/sizeof(int); i++){
//         // cout<<"HI";
//         // here I will loop through the answer vector, which contains the subsets.
//             //!important! I cannot loop until ans.size(), since ans.size() CONSTANTLY GROWS! I have to create a temp variable
//         tmp_size=ans.size();
//         for(int j=0; j<tmp_size; j++){
//             //lesson 1: I don't think you can allocate another vector as an empty vector.
//             tmp=ans[j];
//             tmp.push_back(a2[i]);
//             ans.push_back(tmp);
//         }
//     }
//     cout<<"Done";
// //cout the answer
//     for(auto x:ans) {cout<<"\n";for(auto y:x) cout<<y<<" ";}
    
    
//     return 0;
// }