#include "LinkedList.h"
#include "Node.h"
#include<iostream>
using namespace std;


void NodeTest(){
    Node a;
    Node b(7); 
    cout << "Node empty constructor: ";
    cout << a << endl;
    cout << "Node with value 7 constructor: ";
    cout << b << endl;
}
void LinkedListTest() {
    string a = "SecondLL"; // Second Linked List
    string b = "FirstLL";
    int values[3] = {0, 1, 2};
    LinkedList first;
    if (first.is_empty()) {
        cout << "Empty constructor works." << endl;
    }
    LinkedList second(a);
    first.set_name(a);
    cout << "Name of first linked list: " << first.get_name() << endl;
    cout << "Name of second linked list: " << second.get_name() << endl;
    second.insert_front(values[0]);
    second.insert_back(values[2]);
    second.insert_after(values[0],values[1]);

    cout << second << endl;
}

int main() {
    NodeTest();
    LinkedListTest();
}