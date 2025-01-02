#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin>>n;
    vector<int> numbers;
    for(int i=0;i<floor(n/2);i++){
        cin>>a;
        numbers.push_back(a);
    }
    int answer = 0;
    for(int i=0;i<n/2; i++){
        cin>>a;
        if(a == numbers[i]){
            answer++;
        }
    }
    cout<<answer * 2;
    return 0;
}

// took 5 minutes