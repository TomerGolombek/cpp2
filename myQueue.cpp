/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/
#include "myQueue.h"
#include <iostream>
// Assign vector


myQueue::myQueue(int max){
    maxQ = max;
    elements.clear();
}
myQueue::~myQueue(){
    elements.clear();
}

int myQueue::PrintVector() {
    if (elements.empty()) {
        cout << "The queue is empty\n" << endl;
        return false;
    }
    cout<<elements[0];
    for (int i=1; i < elements.size();i++){
        cout<< " <- " <<elements[i] ;
    }
    cout<<"\n"<<endl;
    return true;
}

bool myQueue:: enQueue(int const val) {
    if (elements.size()>=maxQ) {
        cout << "Queue is full\n" << endl;
        return false;
    }
    elements.push_back(val);
    return true;
}

bool myQueue:: deQueue(){
    if (isEmpty())
        return false;
    elements.erase(elements.begin());
    if (isEmpty())
        return false;
    return true;
}

bool myQueue:: isEmpty(){
    if (elements.empty()){
        return true;
    }
    return false;//true if the container is empty, false otherwise
}
int* myQueue:: peek() const{
        if (!elements.empty()) {
            cout << elements[0] << endl;
            int* ptr = const_cast<int *>(elements.data());
            return  ptr;  // Return pointer to the first element
        } else {
            cout << "Queue is empty" << endl;
            return nullptr;  // Return nullptr for an empty vector
        }
    }



