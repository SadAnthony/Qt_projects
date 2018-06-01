#ifndef LIST_H
#define LIST_H

#include <string>
using std::string;

struct Node {
    string name;
    double num;
    Node* next;
    Node* prev;
};

void makeNode(Node&, const string&, double);
void printNode(const Node&);
class List {
private:
    Node* head;
    Node* tail;
    size_t listSize;
public:
    List();
    List(Node&);
    void addEnd(Node&);
    bool isempty() const{ return !listSize; }
    Node* search(const string&) const;
    void delNode(const string&);
    void printList() const;
};

#endif // LIST_H
