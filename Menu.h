/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/
#ifndef EX4_MENU_H
#define EX4_MENU_H
using namespace std;
#include <bits/stdc++.h>
#include <iostream>
#include "myQueue.h"
#include "Set.h"
struct Menu {
    // Member function declarations
    int mainMenu();
    int setMenu();

    int queueMenu();
    void ChangeMaxQ(int sizeQ);

};

// Function prototypes or declarations related to Menu
void mainMenu(const Menu& obj);
void setMenu(const Menu& obj);
void queueMenu(const Menu& obj);


#endif //EX4_MENU_H
