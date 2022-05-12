#if !defined(SLList_H)
#define SLList_H

#include "List.h"
#include "ListNode.h"
template <typename E>
class SLList : public List<E>{
private:
  ListNode<E>* head;
  ListNode<E>* tail;
  ListNode<E>* curr;
  int cnt; //size variable for the list
public:
  SLList(int size); // size of the array needed
  ~SLList();
  void clear();
  void insert(E item);
  void append(E item);
  E remove();
  void moveToStart();
  void moveToEnd();
  void prev();
  void next();
  int length();
  int currPos();
  void moveToPos(int pos);
  E getValue();
  E getValue(int pos);
};

template <typename E>
SLList<E>::SLList(int size){
  curr = head = tail = new ListNode<E>;
  cnt = 0;
}

template <typename E>
SLList<E>::~SLList(){
  while(head != nullptr){
    curr = head;
    head = head->next;
    delete curr;
  }
}

template <typename E>
void SLList<E>::clear(){
  while(head != nullptr){
    curr = head;
    head = head->next;
    delete curr;
  }
  curr = head = tail = new ListNode<E>;
  cnt = 0;
}

template <typename E>
void SLList<E>::insert(E item){
  ListNode<E>* temp;
  temp = new ListNode<E>(item, curr->next);
  curr->next = temp;
  if(tail == curr){
    tail = curr->next;
  }
  cnt++;
}

template <typename E>
void SLList<E>::append(E item){
  ListNode<E>* temp;
  temp = new ListNode<E>(item, nullptr);
  tail->next = temp;
  tail = tail->next;
  cnt++;
}

template <typename E>
E SLList<E>::remove(){
  if(curr->next == nullptr){
    E value = E();
    return value;
  }
  E item = curr->next->element;
  ListNode<E>* temp = curr->next;
  if(tail == curr->next){
    tail = curr;
  }
  curr->next = curr->next->next;
  delete temp;
  cnt--;
  return item;
}

template <typename E>
void SLList<E>::moveToStart(){
  curr = head;
}

template <typename E>
void SLList<E>::moveToEnd(){
  curr = tail;
}

template <typename E>
void SLList<E>::prev(){
  if(curr == head){
    return;
  }
  ListNode<E>* temp = head;
  while(temp->next != curr){
    temp = temp->next;
  }
  curr = temp;
}

template <typename E>
void SLList<E>::next(){
  if(curr != tail){
    curr = curr->next;
}
}

template <typename E>
int SLList<E>::length(){
  return cnt;
}

template <typename E>
int SLList<E>::currPos(){
  ListNode<E>* temp = head;
  int i;
  for(i = 0; curr != temp; i++){
    temp = temp->next;
  }
  return i;
}

template <typename E>
void SLList<E>::moveToPos(int pos){
  if((pos < 0) && (pos > cnt)){
    return;
  }
  curr = head;
  for(int i = 0; i < pos; i++){
    curr = curr->next;
  }
}

template <typename E>
E SLList<E>::getValue(){
  if(curr->next == nullptr){
    E value = E();
    return value;
  }
  return curr->next->element;
}

template <typename E>
E SLList<E>::getValue(int pos){
  this->moveToPos(pos);
  if(curr->next == nullptr){
    E value = E();
    return value;
  }
  return curr->next->element;
}

#endif
