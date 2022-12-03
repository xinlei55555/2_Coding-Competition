#include <bits/stdc++.h>

using namespace std;

int main(){
    // Here, basically, a has to match the vertical AND the horizontal sides, at least.
        //am using __int64, cuz like they are using ENOURMOUS values
    __int64 n, m, a;
    cin>>n>>m>>a;
    int area = pow(a, 2);
    //if everything fits perfectly:
        //i realized that his is useless!!!!
    // if((n*m)%area == 0) cout<<(n*m)/area<<"\n";
    //if doesn't fit perfectly
        //important to declare floats, or it's automatically round to ints...
    
    // else {
        //if it did not fit, that means that the area
            //if n%a is true, that means that n is NOT divisible by a
            //this is my way of round up (cuz c++ always rounds down from floats to ints) 
        __int64 first, second;
        if(n%a) first = (n/a)+1;
        else first = (n/a);
        if(m%a) second = (m/a)+1;
        else second = (m/a);
        cout<<first*second<<'\n';
    // }
    return 0;
}