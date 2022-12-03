#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> a;
    int b;
    for(int i=0; i<4; i++) {cin>>b;a.insert(b);}
    cout<<4-size(a);
    return 0;
}