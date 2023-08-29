#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
   
    int answer = 0;

    for(int i=0; i<(ceil(n/5)+1); i++){
        
        if(((n-(5*i))%4) == 0){
            
            answer++;
        }
    }
    cout<<answer;
    return 0;
}