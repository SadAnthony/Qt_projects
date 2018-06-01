#include "list.h"
#include <iostream>
using std::string;

void makeNode(Node& leaf, const string & str, double n){
    leaf.next = leaf.prev = nullptr;
    leaf.name = str;
    leaf.num = n;
    return;
}
void printNode(const Node& leaf){
    std::cout << "Name: " << leaf.name << ", num: ";
    std::cout << leaf.num << std::endl;
    return;
}
List::List(){
    head = tail = nullptr;
    listSize = 0;
    std::cout << "Created\n";
}
List::List(Node& leaf){
    head = tail = &leaf;
    listSize = 1;
}
void List::addEnd(Node& leaf){
    if (this->search(leaf.name)) { //bool (nullptr) == false
        std::cout << "Error: leaf already added.\n";
        return;
    }
    tail->next = &leaf;
    leaf.prev = tail;
    tail = &leaf;
    listSize++;
    std::cout << listSize << " added\n";
    return;
}
Node* List::search(const string& str) const {
    Node* temp = head;
    std::cout << "Searching\n";
    while (temp != nullptr) {
        if (temp->name != str) {
            temp = temp->next;
        } else {
            return temp;
        }
    }
    std::cout << "Error 404: Not found.\n";
    return nullptr;
}
void List::delNode(const string& str){
    std::cout << "Trying to delete\n";
    Node* temp = this->search(str);
    if (temp) { //если такой элемент есть
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        --listSize;
    } else {
        return;
    }
    /*Node* temp = head;
    while (temp != nullptr) {
        if (temp->name != str) {
            temp = temp->next;
        } else {
            if (temp->prev != nullptr) {
                temp->prev->next = temp->next;
            }
            if (temp->next != nullptr) {
                temp->next->prev = temp->prev;
            }
            --listSize;
            std::cout << "    Node deleted.\n";
        }
    }*/
}
void List::printList() const{
    std::cout << "    Trying to print list\n";
    if (this->isempty()) {
        std::cout << "Empty List\n";
        return;
    } else {
        Node* temp = head;
        while (temp != nullptr) {
            printNode(*temp);
            temp = temp->next;
        }
    }
    return;
}
