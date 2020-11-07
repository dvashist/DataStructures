#ifndef NODE_H
#define NODE_H
template <class T>
struct Node {
    T value;
    Node* next;
    Node(T val) {value(val), next(nullptr)}
};
#endif
