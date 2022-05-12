// List node for a singly linked list
#if !defined(ListNode_H)
#define ListNode_H

template <typename E>
class ListNode{
public:
  E element; // value of this node
  ListNode* next; //pointer to the next node in the list

  ListNode(E elemVal, ListNode* nextVal = nullptr){
    element = elemVal;
    next = nextVal;
  }

  ListNode(ListNode* nextVal = nullptr){
    next = nextVal;
  }
};

#endif
