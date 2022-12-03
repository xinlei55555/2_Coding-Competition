#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,3,15,1,5,24};
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    return 0;
}
