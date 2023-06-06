/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/


#ifndef EX4_SET_H
#define EX4_SET_H
#include "Menu.h"
using namespace std;

class Set{

private:
    int maxSize;
    int currentSize;
    int* arr;
    int set_number;
public:
    Set(int const num , int const size = 1000);
    Set(const Set& obj);
    ~Set();
    int getCurrentSize();
    Set& operator= (const Set& obj);
    Set& operator+= (int i);
    friend Set operator+ (const Set& , const Set&);
    bool operator> (const Set& obj);
    int operator[] (int i);
    friend ostream& operator<<( ostream &, const Set & );
};
#endif //EX4_SET_H