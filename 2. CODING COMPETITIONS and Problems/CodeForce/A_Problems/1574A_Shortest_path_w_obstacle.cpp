#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(NULL);

    int n,a,total;
    cin>>n;
    int values[6];
    for(int i=0; i<n; i++){
        //lesson 1: always reinitialize the values you are reusing
        total=0;
        for(int i=0; i<6; i++){
            cin>>a;
            values[i]=a;
        }        
        
    //lesson 2: always shorten your code! (with many ifs)
        //i gotta make sure that  values are not aligned, AND that the values are in increasing order, so that f is actually blocking a and b
        // if(((values[1]==values[3] && values[3]==values[5])&&((((values[1]<values[5])&&(values[3]>values[5]))||((values[3]<values[5])&&(values[1]>values[5])))))
        //  || ((values[0]==values[2] && values[2]==values[4])&&(((values[0]<values[4])&&(values[2]>values[4]))||((values[2]<values[4])&&(values[0]>values[4]))))) total+=2;
        if((values[5]==values[1]&&values[1]==values[3])||(values[4]==values[0]&&values[0]==values[2])){
            if(((values[4]<values[0]&&values[4]>values[2])||(values[4]>values[0]&&values[4]<values[2]))||((values[5]<values[1]&&values[5]>values[3])||(values[5]>values[1]&&values[5]<values[3]))) total+=2;
        }
        
        //cout<<"total"<<total<<endl;
        //for(auto x:values) cout<<x;
        total+=(abs(values[3]-values[1])+abs(values[2]-values[0]));
        cout<<total<<"\n";

    }
    return 0;
}
