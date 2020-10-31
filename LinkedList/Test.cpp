#include "LinkedList.h"
#include "Node.h"
#include<iostream>
using namespace std;


int NodeTest(){
    Node a;
    Node b(7); 
    cout << "Node empty constructor: ";
    cout << a << endl;
    cout << "Node with value 7 constructor: ";
    cout << b << endl;  
    return 0;
}


int main() {
    string a = "SecondLL"; // Second Linked List
    LinkedList first;
    if (first.is_empty()) {
        cout << "Empty constructor works." << endl;
    }
    LinkedList second(a);
    first.set_name("FirstLL");
    cout << "Name of first linked list: " << first.get_name() << endl;
    cout << "Name of second linked list: " << second.get_name() << endl;
    second.insert_front(0);
    second.insert_back(2);
    second.insert_after(0,2);
    cout << second << endl;
}