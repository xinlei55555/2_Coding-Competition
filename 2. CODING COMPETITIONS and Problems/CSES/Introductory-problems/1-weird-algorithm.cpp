#include <bits/stdc++.h>
using namespace std;

int main(){
    //use a long long value!!!
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        n=(n%2==0? n/2:n*3+1);
        cout<<n<<" ";
    }
    return 0;
}