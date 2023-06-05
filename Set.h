/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/


#ifndef EX4_SET_H
#define EX4_SET_H
//#include "Menu.h"
using namespace std;

class Set{

private:
    int maxSize;
    int currentSize;
    int* arr;

public:
    Set();
    Set(int const size);
    Set(const Set& obj);
    ~Set();
    int getCurrentSize();
    Set& operator= (const Set& obj);
    Set& operator+= (int i);
    Set& operator+ (int i);
    bool operator> (const Set& obj);
    int operator[] (int i);
    ostream& operator<< (ostream& output);

};
#endif //EX4_SET_H