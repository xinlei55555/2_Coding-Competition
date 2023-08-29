#include <bits/stdc++.h>
using namespace std;

//! the first part of this section is in the notebook :)
//!Most of the times, sorting is worth it, as it significantly decreases the rest of the algorithm!

//let me define a function that would determine how to sort stuff
    //this starts by sorting by length, and then alphabetically!
bool comp(string a, string b){
    if (a.size()!=b.size()) return a.size()<b.size();
    return a<b;
}
int main(){
    //the sort function that was introduced earlier can also be used in conjunction to other functions so it can perform specific sorting tasks
    vector<string> v = {"hi", "helllloo", "fadalfasjk", "I am named John", "a", "z"};
    sort(v.begin(), v.end(), comp);

//this is an easier way to loop through a vector, using an iterator
    for(auto& itr:v){
        cout<<itr<<endl;
    }//prints: a
        // z
        // hi
        // helllloo
        // fadalfasjk
        // I am named John

    //*ok, now I a going to experiment with some functions that were described in the book
        //basically returns, in both cases, the index of the value that suits the description best
    //the following functions assume that the given vector is sorted --> or else, it will output the wrong value
    vector<int> sorted_vector= {1,2,5,5,6,6,7,10,41,135,1535};

//finding the closest smaller or equal value to a certain other x
    auto pointer = lower_bound(sorted_vector.begin(), sorted_vector.end(), 5 );
    //lower_bound returns a pointer to the value, thus, to access the value itself, we have to use *v 
    cout<<*pointer<<endl;

//find the first value that is bigger than x
    pointer = upper_bound(sorted_vector.begin(), sorted_vector.end(), 5);
    cout<<*pointer<<endl;

//finding a value
    auto iterator = find(sorted_vector.begin(), sorted_vector.end(), 6);
    // cout<<iterator; ---->this doesn't work!
    int index = iterator-sorted_vector.begin();
    cout<<index<<endl;

//conclusion: 
    //!always better to use binary search, instead of looping blindly through the loop to look for a value
    //lemme practice by finding the value 135 in the above vector
    /* int searched_value = 135, k=0;
    // for(int b=(sorted_vector.size()/2); b/2>=1; b/=2){
    //     cout<<k<<b;
    //     if(sorted_vector[k+b]==searched_value) cout<<k+b;
    //     if(sorted_vector[k+b]<searched_value) k+=b;
    //     continue;
    }*/ //---->the algorithm doesn't work, cuz here, I stop the function whenever b==1, the function stops
    int a=0, b=sorted_vector.size()-1, k, searched_value=135;
    while(a<=b){
        k=(a+b)/2;
        if(sorted_vector[k] == searched_value){
            cout<<k<<endl;
            break;
        }
        if(sorted_vector[k]<searched_value) a=k+1;//here, I want one more value than b!
        if(sorted_vector[k>searched_value]) b=k-1; //here, I want one less value than b
    }
    //YAY! this returns 9!
    //!-->although always easier to use find(), if I am looking for a specific value, but if I am looking for constraints.

    


    return 0;
}