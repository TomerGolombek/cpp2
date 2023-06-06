/*Assignment C++: 2
Author: Tomer Golombek, ID: 316309699
Author: Yoav Nahum, ID: 318674249
*/
#include "Set.h"


Set::Set(int const num , int const size) : maxSize(size) , currentSize(0) , set_number(num){arr = new int[maxSize+1];}
Set::Set(const Set& obj): maxSize(obj.maxSize) {
    currentSize = obj.currentSize;
    arr = new int[obj.maxSize + 1];
    for(int i = 0; i < currentSize; i++){
        arr[i] = obj.arr[i];
    }
}
Set::~Set() {delete this->arr;}

int Set::getCurrentSize() {
    return currentSize;
}
Set& Set:: operator= (const Set& obj){
    if(this != &obj){
        this->maxSize = obj.maxSize;
        this->currentSize = obj.currentSize;
        delete[] arr;
        arr = new int[maxSize + 1];
        for (int i = 0; i < currentSize; i++){
            arr[i] = obj.arr[i];
        }
    }
    return *this;
}

Set&  Set::operator+=(int val) {
    for (int i = 0; i<currentSize; i++){
        if (val==arr[i])
            return *this;
    }
    arr[currentSize] = val;
    currentSize++;
    return *this;
}

Set operator+ (const Set &s1,const Set &s2) {
    Set s3(3);
    int index = 0;
    s3.currentSize = s1.currentSize+s2.currentSize;
    for (int i=0; i <s1.currentSize ; i++){
        s3.arr[i] = s1.arr[i];
    }
    for (int i=0; i<s2.currentSize ; i++){
        if(!s1.currentSize){
            for (int t=0; t < s2.currentSize ; t++){
                s3.arr[t] = s2.arr[t];
            }
            break;
        }
        for (int j=0; j<s1.currentSize; j++){
            if(s2.arr[i]==s1.arr[j]) {
                s3.currentSize--;
                break;
            }
            if (j==s1.currentSize-1){
                s3.arr[index + s1.currentSize] = s2.arr[i];
                index++;
            }

        }
    }
    return s3;
}

bool Set:: operator> (const Set& obj){
    if (this->currentSize <= obj.currentSize)
        return false;
    else {
        return true;
    }
}
int Set:: operator[] (int i ) const{
    return arr[i];
}

ostream& operator<<( ostream &output, const Set &s ) {
    if(s.set_number==3){
        if(!s.currentSize){
            output<<"The union is empty"<<endl;
            return output;
        }
    }else{
        if(!s.currentSize){
            output<<"Set "<< s.set_number <<" is empty"<<endl;
            return output;
        }
    }
    output<<"{"<<s.arr[0];
    for (int i=1;i<s.currentSize;i++){
        output<<", "<<s.arr[i];
    }
    output<<"}"<<endl;
    return output;
}


