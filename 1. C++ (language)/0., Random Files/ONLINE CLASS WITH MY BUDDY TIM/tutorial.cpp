
#include <iostream>
//this is essentially a library that we are importing

using namespace std;
//a namespace is just a group of code
    //when we write this, we are including the namespace that is called 'std' everytime we try to run a cout.
    // if not, we would have to write std::cout
        // this code would tell the program that we are including the namespace (group of code) called std and that we would like to cout

string hello = "hello";
bool hi = true;
char helo = 'a';
// we use single quotes for chars

/**-----------------------------
 * How to compile?
 * g++ filename.cpp -o filename_of_the_machine_language_file
 * to run:
 * filename_of_the_machine_language_file
 */


int main(){
    // the main function is the entry point, it is the first function that is going to get read
    // the 'int' tells the compiler what we are going to return, in this case, we are returning a type int, so 'return 0'
    cout<<"hello world"<<"hello \n";
    //*note, we must always use double quotation marks
    // the \n is a way to skip a line or endl (which is the same thing)
    cout<<hello<<' '<<helo<<endl;
    //it is important to put the ; to show that they are different lines.
    cout<<hi;
    /* when we print bool, it only print 0 for true and 1 for false*/

return 0;
}