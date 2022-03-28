/*
@file AStack.h
@Brief: This is the header file for AStack objects
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Stack.h"
#include <iostream>
#include <exception>

template <typename E>
class AStack : public Stack<E>{
private:
  int maxSize;
  int stackSize;
  E* stackArray;
public:
  AStack();
  ~AStack();
  void clear();
  void push(const E& item);
  E pop();
  E topValue();
  int length();
};

// Declare an exception that can be thrown by pop() and topVlaue() if the
// stack is empty.
class emptyStackException: public std::exception{
  virtual const char* what() const throw(){
    return "Stack is empty";
  }
} emptyStackException;

template <typename E>
AStack<E>::AStack(){
  maxSize = 10; // Initiailized to an arbitrary value. With the implementation
  stackSize = 0;  // of array-based lists we passed a starting size to the
  stackArray = new E[maxSize]; // constructor, but Stack.h does not allow for
                                  // any arguments to the constructor unless we
                                  // modify the Stack.h implementation
}

template <typename E>
AStack<E>::~AStack(){
  delete[] stackArray;
}

template <typename E>
void AStack<E>::clear(){
  delete[] stackArray;
  stackSize = 0;
  stackArray = new E[maxSize];
}

template <typename E>
void AStack<E>::push(const E& item){

  // If the size of the stack reaches the size of the array, copy the stack to
  // a new array of size^2
  if(stackSize >= maxSize){
    E* temp = new E[maxSize * maxSize]; // create new arr of size^2
    for(int i = 0; i < stackSize; i++){ // copy values to new arr
      temp[i] = stackArray[i];
    }
    maxSize = maxSize * maxSize; // set new max size
    stackArray = temp; // make stackArray point to new larger arr in memory
  }
  stackArray[stackSize++] = item;
}

template <typename E>
E AStack<E>::pop(){
  try{
    if(stackSize == 0){
      throw emptyStackException;
    }
    else{
      E item = stackArray[stackSize - 1];
      stackSize--;
      return item;
    }
  }
  catch(std::exception& e){
    std::cout << e.what() << std::endl;
  }
}

template <typename E>
E AStack<E>::topValue(){
  try{
    if(stackSize == 0){
      throw emptyStackException;
    }
    else{
      return stackArray[stackSize - 1];
    }
  }
  catch(std::exception& e){
    std::cout << e.what() << std::endl;
  }
}

template <typename E>
int AStack<E>::length(){
  return stackSize;
}
