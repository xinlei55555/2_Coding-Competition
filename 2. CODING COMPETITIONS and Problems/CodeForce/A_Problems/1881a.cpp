#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
        vector<int> a = {1,2,3,4,5};
        vector<int> b = a;
        a.push_back(1);
        for(auto x: a) cout<<x<<" ";
        cout<<"\n";
        for(auto x:b) cout<<x<<" ";
        return 0;
}