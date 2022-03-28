// stack abstract class

template <typename E>
class Stack{
public:
  Stack(){}
  virtual ~Stack(){}

  //reinitializes the stack
  virtual void clear() = 0;

  //push an element onto the top of the stack
  //@param item: element being pushed
  virtual void push(const E& item) = 0;

  //remove the element form the top of the stack
  //return: the eement at the top
  virtual E pop() = 0;

  //return a copy of the top element
  virtual E topValue() = 0;

  //return the number of elements in the stack
  virtual int length() = 0;
};
