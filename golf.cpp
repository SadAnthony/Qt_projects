#include <iostream>
#include "golf.h"
#include <string.h>
using std::cout;
using std::cin;

Golf::Golf(){
    m_fullname[0] = '\0';
    m_handicap = 0;
}
Golf::Golf(char* fullname, int handicap){
    strcpy(m_fullname, fullname);
    m_handicap = handicap;
}
int Golf::setgolf(){
    cout << "Input player's name: ";
    char name [40];
    cin.getline(name, 40);
    if (!strlen(name))
        return 0;
    Golf someone;
    strcpy(someone.m_fullname, name);
    cout << "Input player's handicap: ";
    cin >> someone.m_handicap;
    *this = someone;
    return 1;
}
void Golf::showgolf() const {
    cout << "Player's name: " << m_fullname;
    cout << ", player's handicap: " << m_handicap << std::endl;
}
