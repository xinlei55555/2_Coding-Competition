#include <bits/stdc++.h>
using namespace std;

int ans[26]={0};
void letter_count (string w1, string w2){
    cout<<"HELLO";
    int letters[26]={0};
    int letters1[26]={0};
    for(auto x:w1){
        letters[x-'a']++;
    }
    for(auto x:w2) letters1[x-'a']++;
    for(int i=0; i<26; i++) ans[i]+=max(letters[i], letters1[i]);
    

}
int main(){
    ifstream fin("blocks.in");
    ofstream fout("blocks.out");
    int i,N,tmp,j;
    fin>>N;
    cout<<"HI";
    //fout<<"HI";
    string A,B;
    while(N--){
        fin>>A>>B;
        //get the maximmum number of distinct letters between the two words
        letter_count(A, B);
        cout<<"HI";
    }
    
    for(i=0;i<26;i++){fout<<ans[i]<<"\n";}
    return 0;
}

//!what I was trying to here was wrong!
    //I was trying to figure the minimum number of letters to cover every single case, where 2 words would appear together, not just any case, with more than two words!
//wrong base case, try debugging, idk what is wrong.
    //the base case should be enough to cover every case...
    // for(i=0; i<N;i++){
    //     int la[26]={0}, lb[26]={0};
    //     fin>>A>>B;
    //     //basically, for every two words, we need to 
    //         //!the same two words (on one card, will never be in the same two together!)
    //     cout<<A<<" "<<B;
    //     for(auto idx:A){
    //         //!i misconverted char to int TT    // not -'0', use -'a'
    //         x=idx-'a';
    //         la[x]++;
    //         tmp=arr[x];
    //         arr[x]=max(la[x], tmp);
    //         if(arr[x]==la[x])arr2[x]=tmp;
            
    //     }

    //     for(auto idx:B){
    //         x=idx-'a';
    //         lb[x]++;
    //         //I added this line, to solve the fact that two elements in the same card cannot appear together!
    //         if(lb[x]<=la[x]) continue;
    //         tmp=arr[x];
    //         arr[x]=max(lb[x], tmp);
    //         if(arr[x]==lb[x])arr2[x]=tmp;
    //     }
        
    // }