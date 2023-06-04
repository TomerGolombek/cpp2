/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/

#ifndef EX4_SET_H
#define EX4_SET_H
class Set{

private:
    int maxSize;
    int currentSize;
    int* arr;

public:
    Set();
    Set(int maxSize);
    int getCurrentSize();
    ~Set();
};

#endif //EX4_SET_H