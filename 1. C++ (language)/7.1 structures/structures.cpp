//!https://www.w3schools.com/cpp/cpp_structs.asp#:~:text=Structures%20(also%20called%20structs)%20are,%2C%20bool%2C%20etc.).
//!here is my conversation with chat gpt

/*
why Node *head = new Node; instead of Node head;?
    In C++, the new keyword is used to dynamically allocate memory for a new object on the heap. When you use new to create an object, you are creating a pointer to the object rather than the object itself.

    For example, when you write Node *head = new Node;, you are creating a new Node object on the heap and assigning a pointer to it to the variable head. This allows you to create an object that exists beyond the lifetime of the function or block in which it was created, as the object remains in memory until it is explicitly deleted using the delete operator.

    On the other hand, when you write Node head;, you are creating a new Node object on the stack. This object will only exist within the scope in which it was created, and it will be automatically destroyed when the function or block ends.

    In general, it is recommended to use dynamic memory allocation (i.e., new and delete) when you need to create objects that will exist beyond the lifetime of the function or block in which they were created, and to use stack-based allocation (i.e., plain variable declarations) when you don't need this level of persistence.


Certainly! Here is an example that demonstrates the difference between stack-based allocation and heap-based allocation in C++:
*/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void test(Node &node2){
    std::cout << "node2: " << node2.data << std::endl;
}

void printNode(Node *node) {
    std::cout << "node test: " << node->data << std::endl;
}

int main() {
    // stack-based allocation
    Node node1;
    node1.data = 5;
    std::cout << "node1: " << node1.data << std::endl;

    // heap-based allocation
        //gpt says: The reason that dynamic memory allocation in C++ requires a pointer is because the object being created is stored on the heap rather than the stack. The heap is a region of memory that is separate from the stack and is used to store objects that need to exist beyond the lifetime of the function or block in which they were created.
    Node *node2 = new Node;
    node2->data = 10;

    test(*node2);
    printNode(node2);

    delete node2;  // delete the object when we're done using it

    //example with a linked list
    Node *head = new Node;
    head->data=20;

    Node *second = new Node;
    second->data = 10;
    second->next = nullptr;
    head->next = second;

//I always need the ->, since the head itself is a pointer
    cout<<head->data<<" ";
    head=head->next;
    cout<<head->data<<" ";

    return 0;
}
/*
In this example, we have a simple struct called Node that has a single field called data. In the main function, we create two Node objects: one using stack-based allocation (node1) and one using heap-based allocation (node2).

The node1 object is created using stack-based allocation, which means it will only exist within the main function. When the main function ends, the node1 object will be automatically destroyed.

On the other hand, the node2 object is created using heap-based allocation, which means it will continue to exist in memory even after the main function ends. We can access the node2 object using the pointer node2 until we delete it using the delete operator.

When you run this code, it will print the following output:

Copy code
node1: 5
node2: 10
This demonstrates that both node1 and node2 are able to store and retrieve data, but the node2 object persists in memory beyond the lifetime of the main function, while the node1 object is automatically destroyed when the function ends.

*/