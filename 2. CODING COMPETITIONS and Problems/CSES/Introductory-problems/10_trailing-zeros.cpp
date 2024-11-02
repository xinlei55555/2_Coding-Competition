#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";


int main(){
    int n;
    cin>>n;
    int total = 0;
    for(int i=1;pow(5, i)<=n;i++){
        total += (floor(n/pow(5, i)));
    }
    cout<<total;

    return 0;
}