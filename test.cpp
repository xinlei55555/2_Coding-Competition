#include <bits/stdc++.h>
using namespace std;
void foo()
{
    int i[] = {1,2,3,4};
    int *p = &i[2];
    cout<<p[-1] <<"\n";
}
// https://www.programiz.com/cpp-programming/library-function/cstring/strncpy
void f(std::string const& s)
{
    char buffer[256];
    strncpy(buffer, s.c_str(), 256);
}

int foo(int x){
    if(x<=0)
    return 0;
    else
    return foo(x-2)+x;
}

class A
{
    public:
    A() {cout<<"Constructed! ";}
    A(A const& o) {cout<<"Copy!";}

};
void Fa(A a){}
void Fb(A & a){}

int main(){
    foo();   
    f("hasdfasdfasdfasdfasdfasdfasdfasdfelo");

    int * p = new int;
    int j = *p;
    int *r = p;
    (*p) = 5;
    int k = (*p);
    cout<<k<<"\n";

    cout<<foo(8);

    A a;
    Fa(a); //when calling this function, i also am declaring a new object
    // Fb(a); //but here, instead, I am just passing by reference.
    A b(a);
    

    return 0;
}