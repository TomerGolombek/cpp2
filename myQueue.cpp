/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/
#include "myQueue.h"

// Assign vector
vector<int> v;



myQueue::myQueue(int max){
    maxQ = max;
    elements.resize(maxQ);
}

int myQueue::PrintVector() {
    if (elements.size()) {
        cout << "The queue is empty" << endl;
        return false;
    }
}

    cout<<elements[0];
    for (int i=1; i < elements.size()+1;i++){
        cout<< " <- " <<elements[i] ;
    }
    cout<<endl;
    return true;
}

bool myQueue:: enQueue(int const val) {
    elements.push_back(val);
    return true;
}

bool myQueue:: deQueue(){
    if isEmpty()
        return false;
    elements.erase(elements.begin());
    isEmpty(elements);
    return true;
}

bool myQueue:: isEmpty(){
    if (elements.empty()){
        cout << "Queue is empty" << endl;
        return true;
    }
    return false;//true if the container is empty, false otherwise

}

int* myQueue:: peek(){
        if (!elements.empty()) {
            cout << elements[0] << endl;
            return elements[0];  // Return pointer to the first element
        } else {
            cout << "Queue is empty" << endl;
            return nullptr;  // Return nullptr for an empty vector
        }
    }



