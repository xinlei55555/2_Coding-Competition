#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, y; 
    cin>>n>>y;
    int i=1;
    while((n*i-y)%10!=0&&(n*i)%10!=0){
        i++;
    }
    cout<<i;
    return 0;
}
