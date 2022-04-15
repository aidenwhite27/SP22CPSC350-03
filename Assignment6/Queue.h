template <typename E>
class Queue {
public:
  Queue() {}
  virtual ~Queue() {}
  virtual void clear() = 0;

  // @param item: element being enqueued
  virtual void enqueue(const E& item) = 0;

  //remove and return the element at the front of the queue
  //return: the element at the front
  virtual E dequeue() = 0;

  //return: a copy of the front element
  virtual E frontValue() = 0;

  virtual int length() = 0;
};
