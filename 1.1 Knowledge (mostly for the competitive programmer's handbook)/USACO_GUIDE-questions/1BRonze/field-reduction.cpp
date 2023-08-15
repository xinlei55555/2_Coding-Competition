#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int n;
vector<vector<ll>> v, vx, vy;
ll idx=0;
bool cmp(vector<ll> first, vector<ll> second){
    return first[idx]<second[idx];
}

//instead of removing cows, just try the areas.
void remove_cow(){
    vx[vx.size()-1]
}
int main(){
    ifstream fin("reduce.in");
    ofstream fout("reduce.out");
    fin>>n;
    for(int i=0;i<n;i++){
        v.push_back(vector<ll>(2));
        cin>>v[i][0]>>v[i][1];
    }
    //sorting in both x, and y;
    sort(v.begin(), v.end(), cmp);
    idx=1;
    sort(v.begin(), v.end(), cmp);

    for(int i=0;i<3;i++){
        remove_cow();
    }
    return 0;
}