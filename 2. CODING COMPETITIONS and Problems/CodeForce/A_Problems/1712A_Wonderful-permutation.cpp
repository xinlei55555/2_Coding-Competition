#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int num, n, k, val, answer;
    vector<int> perms;
    cin>>num;

    for(int i=0; i<num; i++){
        perms={};
        cin>>n>>k;
        answer=k;
        for(int j=0; j<n; j++){
            cin>>val;
            perms.push_back(val);
        }
        for(int j=0; j<k; j++){
            if(perms[j]<=k){
                answer--;
            }
        }
        cout<<answer<<" ";
    }
    return 0;
}