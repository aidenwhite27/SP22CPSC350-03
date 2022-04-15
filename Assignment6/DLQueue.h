#include "Queue.h"
#include "DLList.h"

template <typename E>
class DLQueue : public Queue<E>{
  DLList<E>* list;
  int size;
public:
  DLQueue();
  ~DLQueue();
  void clear();

  // @param item: element being enqueued
  void enqueue(const E& item);

  //remove and return the element at the front of the queue
  //return: the element at the front
  E dequeue();

  //return: a copy of the front element
  E frontValue();

  int length();
};

template <typename E>
DLQueue<E>::DLQueue(){
  list = nullptr;
  size = 0;
}

template <typename E>
DLQueue<E>::~DLQueue(){

}

template <typename E>
void DLQueue<E>::clear(){
  //delete list;
}

template <typename E>
void DLQueue<E>::enqueue(const E& item){
  list->insertBack(item);
}

template <typename E>
E DLQueue<E>::dequeue(){
  return list->removeFront();
}

template <typename E>
E DLQueue<E>::frontValue(){
  return list->peekFront();
}

template <typename E>
int DLQueue<E>::length(){
  return list->length();
}
