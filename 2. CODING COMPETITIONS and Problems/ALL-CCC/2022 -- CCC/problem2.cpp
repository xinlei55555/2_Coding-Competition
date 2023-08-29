#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string  must_be [n*2];
    string first_name;
    string second_name;

    int i = 0;
    while(i < n*2){
        cin>>first_name>>second_name;
        must_be[i] = first_name;
        must_be[i+1] = second_name;
        i+=2;
    }
    
    int n1;
    cin>>n1;
    string must_not_be [n1*2];
    
    i = 0;
    while(i < n1*2){
        cin>>first_name>>second_name;
        must_not_be[i] = first_name;
        must_not_be[i+1] = second_name;
        i+=2;
    }
    
    int n2;
    cin>>n2;
    string third_name;

    int answer = 0;
    string team [3];
    i = 0;
    int j;
    while(i<n2){
        cin>>first_name>>second_name>>third_name;
        // team[0] = first_name;
        // team[1] = second_name;
        // team[2] = third_name;
        //am checking if the value is in the first vector
        j = 0;
        while(j<n*2){
            if(must_be[j] == first_name || must_be[j] == second_name || must_be[j] == third_name){
                if(must_be[j+1] != first_name && must_be[j+1] != second_name && must_be[j+1] != third_name){
                    answer++;
                }
            }
            j+=2;
        }
        j = 0;
        while(j<n1*2){
            if(must_not_be[j] == first_name || must_not_be[j] == second_name || must_not_be[j] == third_name){
                if(must_not_be[j+1] == first_name || must_not_be[j+1] == second_name || must_not_be[j+1] == third_name){
                    answer++;
                }
            } 
            j+=2; 
        }  
        i++;
    }
    cout<<answer;
    return 0;
}
//------------
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;

// //Here i am pushing the values into a vector, 
//     //even with even+1 have to be together.
//     vector<string> must_be;
//     string first_name;
//     string second_name;
//     for(int i = 0; i < n; i++){
//         cin>>first_name>>second_name;
//         must_be.push_back(first_name);
//         must_be.push_back(second_name);
//     }
    
//     cin>>n;
//     vector<string> must_not_be;
//     string first_name1;
//     string second_name1;
//     for(int i = 0; i < n; i++){
//         cin>>first_name1>>second_name1;
//         must_not_be.push_back(first_name1);
//         must_not_be.push_back(second_name1);
//     }
    

//     cin>>n;
//     string first_name2;
//     string second_name2;
//     string third_name2;
//     int answer = 0;
//     for(int i = 0; i<n; i++){
//         cin>>first_name2>>second_name2>>third_name2;
//         //am checking if the value is in the first vector
//         for(int j = 0; j<must_be.size(); j++){
//             if(j%2 != 0){
//                 continue;
//             }
//             if(must_be[j] == first_name2 || must_be[j] == second_name2 || must_be[j] == third_name2){
//                 if(must_be[j+1] != first_name2 && must_be[j+1] != second_name2 && must_be[j+1] != third_name2){
//                     answer++;
//                 }
//             }
            
//         }

//         for(int j = 0; j<must_not_be.size(); j++){
//             if(j%2 != 0){
//                 continue;
//             }
//             if(must_not_be[j] == first_name2 || must_not_be[j] == second_name2 || must_not_be[j] == third_name2){
//                 if(must_not_be[j+1] == first_name2 || must_not_be[j+1] == second_name2 || must_not_be[j+1] == third_name2){
//                     answer++;
//                 }
//             } 
//         }
//         // for(int j = 0; j<must_be.size(); j++){
//         //     // if(first_name2 == must_be[j]){
//         //     //     if(j % 2 == 0 && (second_name2 != must_be[j+1] && third_name2 != must_be[j+1])){
//         //     //         answer++;
//         //     //         cout<<"hi1"<<endl;
//         //     //     }
//         //     //     if(j%2 == 1 && (second_name2 != must_be[j-1] && third_name2 != must_be[j-1])){
//         //     //         answer++;
//         //     //         cout<<"hi2"<<endl;
//         //     //     }    
//         //     // }
//         // }
//         // for(int j = 0; j<must_not_be.size(); j++){
//         //     // if(first_name2 == must_not_be[j]){
//         //     //     if(j % 2 == 0 && (second_name2 == must_not_be[j+1] || third_name2 == must_not_be[j+1])){
//         //     //         answer++;
//         //     //         cout<<"hi3"<<endl;
//         //     //     }
//         //     //     if(j%2 == 1 && (second_name2 == must_not_be[j-1] || third_name2 == must_not_be[j-1])){
//         //     //         answer++;
//         //     //         cout<<"hi4"<<endl;
//         //     //     }    
//         //     // }
//         // }
        
//     }
//     cout<<answer;
//     return 0;
// }