#include "stack.h"
#include <iostream>
Stack::Stack(){
    top = 0;
}
bool Stack::isempty() const{
    return top == 0;
}
bool Stack::isfull() const{
    return top == MAX;
}
bool Stack::pop(Item & item){
    if (this->isempty()) {
        return false;
    }
    item = items[--top];
    return true;
}
bool Stack::push(const Item & item){
    if (this->isfull()) {
        return false;
    }
    items[top++] = item;
    return true;
}
void Stack::show() const{
    if (this->isempty())
        std::cout << "Stack is empty\n";
    else
        for (int i = 0; i < top; i++)
            std::cout << this->items[i].fullname << " " << this->items[i].payment << std::endl;
}
