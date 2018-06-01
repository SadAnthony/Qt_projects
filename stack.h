#ifndef STACK_H
#define STACK_H

struct Customer {
    char fullname[35];
    double payment;
};
typedef Customer Item;
class Stack {
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    void show() const;
};

#endif // STACK_H
