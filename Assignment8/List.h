#if !defined(List_H)
#define List_H

template <typename E>
class List {
public:
  List() {}
  virtual ~List() {}

  // clear List
  virtual void clear() = 0;

  // insert element at current location
  // @param item: element to be inserted
  virtual void insert(E item) = 0;

  // append element at the end of the List
  // @ param item: element to be appended
  virtual void append(E item) = 0;

  // remove and return the current element
  // @return the element that was removed
  virtual E remove() = 0;

  // set the current position to the start of the list
  virtual void moveToStart() = 0;

  // set he current position to the end of the List
  virtual void moveToEnd() = 0;

  // move the current position one step to the left
  virtual void prev() = 0;

  // move the current position one step to the right
  virtual void next() = 0;

  // return the number of elements in the List
  virtual int length() = 0;

  //return the position of the current element
  virtual int currPos() = 0;

  // set the current position
  // @param pos: the position to make current
  virtual void moveToPos(int pos) = 0;

  // return the current element
  virtual E getValue() = 0;

};

#endif
