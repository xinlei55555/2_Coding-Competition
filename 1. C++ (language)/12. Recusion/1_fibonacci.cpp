#include <bits/stdc++.h>

using namespace std;
//fibonacci
//here, I declare n as a global variable, and it can be called from fibo and from main!

int fibo(int n){
    //here, I put <= 1, so that if the value is 0 AND 1, it will return 1
    if(n<=1){ //cout<<"1 "; 
        return 1;
    }

    else{
    //from what I see, it is harder to print the good values in the recursive function. better just loop after and print
        //cout<<(fibo(n-1)+fibo(n-2))<<" ";
            //although when I cout, since the order is weird, it doesn't cout the right values
            //cout<<fibo(n-1)<<" "<<fibo(n-2)<<" ";
        return fibo(n-1)+fibo(n-2);
    } 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    //on the internet, what they if they wanna print many values (instead of calculating only one result), they do a while loop that calls the recursive function 
        //this is why, specifically, the recursive fibonnaci algorithm is terrible... (cuz it repeats the calculations many times)
        //O(2^n)--> exponential
    cout<<fibo(n);
    return 0;
}