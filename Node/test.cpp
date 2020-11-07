#include "Node.h"
#include <iostream>
using namespace std;

void TestNode() {
    Node a(2);
    Node b(3.2);
    cout << a.value << endl;
    cout << b.value << endl;
    if ((a.next == nullptr) && (b.next == nullptr)) {
        cout << "All are the next are nullptr so the constructors are working properly." << endl;
    }
}

int main() {
    TestNode();
}