#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Basically, I have to find the minimum and the maximum of the values for each axis. Then, I substract and double their difference.

int main(){
    int test_cases;
    int boxes;
    int x, y;
    cin>>test_cases;
    for(int i=0; i<test_cases; i++){
        vector<int> num = {0,0,0,0};
        cin>>boxes;
        for(int j=0; j<boxes; j++){
            cin>>x>> y;
            if(y==0){
                if(x>num[0]) num[0]=x;
                if(x<num[1]) num[1]=x;
            }
            if(x==0){
                if(y>num[2])num[2]=y;
                if(y<num[3]) num[3]=y;
            }
        }
        cout<<(abs(num[1]-num[0])+abs(num[3]-num[2]))*2<<endl;
    }
    return 0;
}

//         //ERROR! You have to start and finish at (0,0) -- > my code is for if I don't start at (0,0), but on ANY point.

// int main(){
//     int n_test_cases;
//     int n_boxes;
    
//     int x;
//     int y;
//     cin>>n_test_cases;
//     for (int i =0; i<n_test_cases; i++){
//         cin>>n_boxes;
//         //error! Important to reset the values for each test case!
//             //{{x_max, x_min}, {y_max, y_min}}

//         vector<int> num_axis = {-101,101,-101,101};
//         for(int j = 0; j<n_boxes; j++){
//             cin>>x>>y;
//             if(x == 0){
//                 if(y>num_axis[2]) num_axis[2] = y;
//                 if(y<num_axis[3]) num_axis[3] = y;
//             }
//             if(y == 0){
//                 if(x>num_axis[0]) num_axis[0] = x;
//                 if(x<num_axis[1]) num_axis[1] = x;
//             }
//         }
//         //if both axises HAVE values, return the double of the difference
//         int sum = 0;
//         if(count(num_axis.begin(), num_axis.end(), 101) == 0){
//             //if duplicates, then one of them becomes =0
//             if(num_axis[0] == num_axis[1]) num_axis[0]=0;
//             if(num_axis[2] == num_axis[3]) num_axis[2]=0;
//             for(int i=0; i<num_axis.size(); i++){
//                 sum+=abs(num_axis[i]);
//             }
//         }
        
//         else{
//             if(num_axis[1] == 101){
//                 sum = num_axis[2]-num_axis[3];
//             }
//             else sum = num_axis[0]-num_axis[1];
//         }
//         cout<<(2*sum)<<endl;
            
//     }
    

//     return 0;
// }