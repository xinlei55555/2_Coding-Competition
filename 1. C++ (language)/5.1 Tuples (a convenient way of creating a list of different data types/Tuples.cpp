#include <bits/stdc++.h>
using namespace std; 
int main(){
    tuple<string, int, char> tup_name1;
    tuple<string, string, int> tup_name2;
    tup_name1 = make_tuple("Welcome", 2,'a');
    tup_name2 = make_tuple("Educba", "Institute", 9);
    int i,j;
    string s1, s2, s3;
    char c1;
    tie(s1, j, c1) = tup_name1;
    cout<< "The tuple values for the above given first tuple is as follows: ";
    cout << s1 <<" "<< j <<" "<< c1;
    cout <<"\n";
    tie(s1, s2, i) = tup_name2;
    cout<<"The tuple values for the above given second tuple is as follows: ";
    cout << s1 <<" "<< s2 <<" "<< i;
    auto mystr = std::tuple_cat (tup_name1, tup_name2);
    cout <<"\n";
    std::cout << "The concatenated tuple using the tuple_cat function() is as follows: " << '\n';
    std::cout << std::get<0>(mystr) << " ";
    std::cout << std::get<1>(mystr) << " ";
    std::cout << std::get<2>(mystr) << " ";
    std::cout << std::get<3>(mystr) << " ";
    std::cout << std::get<4>(mystr) << " ";
    std::cout << std::get<5>(mystr) << " ";


    //*C++ code to demonstrate swap()

    tuple<string, int, char> t1;
    tuple<string, int, char> t2;
    t1 = make_tuple("Welcome", 2,'a');
    t2 = make_tuple("Educba", 9, 'e');
    cout << "The tuple size of the above given first tuple is : ";
    cout << tuple_size<decltype(t1)>::value << endl;
    t1.swap(t2);
    cout << "The elements after applying swap() for first tuple is as follows: ";
    cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;
    cout << "The elements after applying swap() for second tuple is as follows: ";
    cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl;

    return 0;
}