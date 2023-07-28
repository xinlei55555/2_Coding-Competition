//somehow there is a way to cast values from letters to int, in c++!!!!
#include <bits/stdc++.h>

using namespace std;

int main(){
//----------------------------------------
    char c = 'a';
    int a = c;
    //somehow 'a' is equal to 97
    cout<<"The character \""<<c<<"\" has value "<<a<<"\n";

    c = 'A'; // A
    a = 'A'; // 65
    cout<<"The character \""<<c<<"\" has value "<<a<<"\n";

    int x = (int)c;
    cout<<"The character \""<<c<<"\" has value "<<x<<"\n";

//-------------------------------------
    //in conclusion, if I wanted to convert a character into a number
        //int c = int(<the character>) - 'the character that would be defined as 0'
    char value = 'B';
    //if I want 'A' to be equal to 0 (so that B is 1)
    int number_value = int(value) - 'A';
    cout<<"The character B is equal to "<<number_value<<'\n';

    //if instead, all I wanted to do was to convert a NUMBER that was in a character, such as '1' into an int
    char num = '1'; //has the integer value 49...
    int number = num;
    cout<<number<<"\n";

    number = num - '0'; // Here the character with value 0 would be 0!
    cout<<number<<'\n';

//----------------------
    //converting a int value into a character
    int certain_number = 1;
    char certain_char =  'a' + certain_number;
    cout<<certain_char<<'\n';
    return 0;
}