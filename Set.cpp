/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/
#include "Set.h"


Set::Set() : maxSize(1000) , currentSize(0){ arr = new int[maxSize+1];}
Set::Set(int size) : maxSize(size) , currentSize(0){
    arr = new int[maxSize+1];
}
Set::Set(const Set& obj): maxSize(obj.maxSize) {
    currentSize = obj.currentSize;
    arr = new int[obj.maxSize + 1];
    for(int i = 0; i < currentSize; i++){
        arr[i] = obj.arr[i];
    }
}
Set::~Set() {delete arr;}

int Set::getCurrentSize() {
    return currentSize;
}
Set& Set:: operator= (const Set& obj){
    if(this != &obj){
        maxSize = obj.maxSize;
        currentSize = obj.currentSize;
        delete[] arr;
        arr = new int[maxSize + 1];
        for (int i = 0; i < currentSize; i++){
            arr[i] = obj.arr[i];
        }
    }
    return *this;
}

Set& Set::operator+=(int i) {
    arr[currentSize + 1] = i;
    currentSize++;
    return *this;
}

Set& Set::operator+(int i) {
    arr[currentSize + 1] = i;
    currentSize++;
    return *this;
}

bool Set:: operator> (const Set& obj){
    if (this->currentSize <= obj.currentSize)
        return false;
    else {
        return true;
    }
}
int Set:: operator[] (int i){
    return arr[i];
}

ostream& Set:: operator<< (ostream& output){
    output<<"{ ";
    for (int i=0 ; i<currentSize ; i++){
        output<<arr[i]<<", ";
    }
    output<<"}"<<endl;
    return output;
}


