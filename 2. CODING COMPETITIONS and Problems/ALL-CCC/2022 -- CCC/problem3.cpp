#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 3;
    // int m;
    // int k;
    // cin>>n>>m>>k;
    
    int sample [n] = {1,2,1};
    //i will count the number of good samples
    int num_good_samples = n;

    vector<int> temp;
    vector<vector<int>> good_samples;
    for(int i = n; i!=0; i--){
        for(int j = 0; j<n; j++){
            if(0 == count(temp.begin(), temp.end(), sample[j])){
                temp.push_back(sample[j]);
                
            }

            else{
                break;
            }
        }
        for(int i = 0; i<temp.size(); i++){
            cout<<temp[i];
        }
        cout<<endl;
        if(temp.size() == i){
            good_samples.push_back(temp);
        }
    }
    num_good_samples += good_samples.size();
    cout<<num_good_samples<<endl;
    // for(int max_num_elements = 2; max_num_elements<n; max_num_elements++){
    //     for(int kdx = 0; kdx<n; kdx++){
    //         if(temp.size()< max_num_elements){
    //             if(count(temp.begin(), temp.end(), sample[kdx])==0){
    //                 temp.push_back(sample[kdx]); 
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //         if(temp.size()>=max_num_elements){
    //             break;
    //         }
                
    //     }
        // if(temp.size()>0){
        //     good_samples.push_back(temp);
        // }
    
    for(int i = 0 ; i<good_samples.size(); i++){
        for(int j = 0; j<good_samples[i].size(); j++){
            cout<<good_samples[i][j];
        }
        cout<<endl;
    }

    
    
    // for(int i = 0; i < n; i++){
    //         temp.push_back(sample[i])
    //     }
    // for(int idx = 0; idx<n; idx++){
        
    //     // for(int jdx = 2; jdx<m; jdx++){
    //     //     sample[idx] = 
    //     // }
    //     // for(int number_in_sample = 1; number_in_sample<n; number_in_sample++){
    //     //     for(int index = 0; index<n; index++){
    //     //         for(int ldx = 0; ldx<number_in_sample; ldx++){
    //     //             good_sample[]
    //     //         }
    //     //     }
    //     // }
    //     if()
    // }
    // cout<<-1;
    return 0;
}