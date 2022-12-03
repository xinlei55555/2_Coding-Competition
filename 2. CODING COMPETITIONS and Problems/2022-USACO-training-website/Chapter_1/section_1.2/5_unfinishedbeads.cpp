/*
ID: xinlei51 
TASK: beads
LANG: C++                 
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    ofstream fout("beads.out");
    ifstream fin("beads.in");
    int n;
    fin>>n;
    //this problem is interesting and looks a lot like the longest continuous subarray problem...
    string necklace;
    fin>>necklace;
    int maxm=-351;
    int curr=0, curr1=0,start;
    //i'll start looping when there is a difference between r and b
    for(int i=0; i<n; i++){
        if(necklace[i]!=necklace[i+1] && necklace[i]!='w' && necklace[i+1]!='w'){
            start=(i+1);
            break;
        }
    }
    cout<<start;
    for(int i=0; i<n; i++){
        //ok yea, only problem is i don't know what to do when there is a white bead. and I am wayyy too tired rn to think about it TT
        if(necklace[i] =='w'){
            if(necklace[i-1]==necklace[i+1]){
                necklace[i]=necklace[i+1];
                curr+=1;
            } 
            else{
                necklace[i]=necklace[i+1];
                maxm = max(curr+curr1, maxm);
                curr1=curr;
                curr=0;
            }
        }
        if(necklace[(i+start)%n]==necklace[(i+start)%n+1]||necklace[(i+start)%n+1]=='w'){
            curr+=1;
            //converting the white ones into the right color;
            // necklace[i+1]=necklace[i];
        } 
        else if(necklace[(i+start)%n]!=necklace[(i+start)%n+1]) {
            maxm = max(curr+curr1, maxm);
            curr1 = curr; 
            curr = 0;
        }
    }   
    fout<<maxm<<"\n";

    return 0;
}