//!another method is to use the bit representation, which basically dictates when you should, and should not ignore a value
    //https://www.geeksforgeeks.org/find-distinct-subsets-given-set/


#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> lst = {1, 2, 3};

//thus, at the beginning, comb doesn't have any values in it!
    //then, since it is passed as a reference, its value gets updated.
    
void fun(vector<int> &comb, int i){
    //I am looping through elements 0-2, and every time I reach the last element, I cout what was in comb
        //note, in this case, the base case doesn't make the recursion loop go back through EVERYTHING! it just prints what was saved in its array
    if(i == n){
        for(int e : comb){
            cout <<e << " ";
        }
        cout << "\n";
        return;
    }
//here, this creates two new recursive functinos, which are both, at the same time, at the second iteration, but with two differnet cases, one where it skips, and one where is continue!
    fun(comb, i+1);
    //here, I add a value to comb, which is the current value of comb, and I continue the loop
    comb.push_back(lst[i]);

    fun(comb, i+1);
    //here, I perform the other possibility, which is to skip the value at the given index. In this case, since I just added the value, to skip it, I would just remove it!
    comb.pop_back();
}

int main(){
    vector<int> comb;
    n = 3;
    fun(comb, 0);
    return 0;
}