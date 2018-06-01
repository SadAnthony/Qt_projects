#include "move.h"
#include <iostream>

Move::Move(double a, double b){
    x = a;
    y = b;
}
void Move::showmove() const{
    std::cout << x << " " << y << std::endl;
}
Move Move::add(const Move & m) const{
    Move one(x + m.x, y + m.y);
    return one;
}
void Move::reset(double a, double b) {
    x = a;
    y = b;
}
