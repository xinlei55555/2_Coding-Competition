#include <bits/stdc++.h>

using namespace std;
int n;
int ans=0, a, b, c;
// I don't even need to pass anything in the function!
void o(){
    cin>>a>>b>>c;
    n--;
    if((a+b+c)>=2) ans++;
}
int main(){
    //ok, this is an intricate new way of writing it, but basically
        // the first value of n is cin>>n
        //and then, I am removing 1 directly from the value of n
        //to remove 1, i am using directly the function o()!
    for(cin>>n;n!=0;o());
    cout<<ans;
    return 0;
}