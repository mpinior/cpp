#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

template <class T>
class Vector{
    T* array;
    int initialSize;

public:
    Vector();
    Vector(int initialSize);
    ~Vector();

    void setAt(int index, T& t);
};


// def 
template <class T>
Vector<T>::Vector(){

}
template <class T>
Vector<T>::Vector(int initialSize){
    this->array = new T[initialSize];
    this->initialSize = initialSize;
}
template <class T>
Vector<T>::~Vector(){
    delete[] array;
}
template <class T>
void Vector<T>::setAt(int index, T& t){
    std::string error = "InvalidIndexException";
    if (index > this->initialSize){
        throw error;
    }
    this->array[index] = t;
}


#endif 