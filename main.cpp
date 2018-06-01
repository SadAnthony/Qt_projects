#include "list.h"
#include <iostream>

int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    Node arr[5];
    makeNode(arr[0], "Alfred", 12);
    makeNode(arr[1], "Archebald", 43);
    makeNode(arr[2], "Fred", 54);
    makeNode(arr[3], "Nobel", 2332);
    makeNode(arr[4], "Edward", 5454);
    /*for (int i = 0; i < 5; i++) {
        cout << "Enter leaf's name: ";
        cin >> arr[i].name;
        cout << "Ented number: ";
        cin >> arr[i].num;
    }*/
    List Something(arr[0]);
    Something.addEnd(arr[1]);
    Something.addEnd(arr[2]);
    Something.addEnd(arr[3]);
    Something.addEnd(arr[4]);
    cout << "Full\n";
    Something.addEnd(arr[3]);
    Something.delNode(arr[3].name);
    Something.addEnd(arr[3]);
    Something.printList();
    printNode(*Something.search(arr[1].name));
    return 0;
}
