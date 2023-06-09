/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/


#ifndef EX4_MYQUEUE_H
#define EX4_MYQUEUE_H
//#include "Menu.h"
#include "vector"


using namespace std;
class myQueue{

private:
int maxQ;
vector<int> elements;

public:
    myQueue (int max);
    ~myQueue();
    int PrintVector();
    bool enQueue (int val);
    bool deQueue();
    bool isEmpty();
    int* peek() const;


};
#endif //EX4_MYQUEUE_H