#if !defined(student_H)
#define student_H

class student{
public:
  student();
  student(int timeArrived, int timeNeeded);
  ~student();
  int timeArrived;
  int timeHelped;
  int timeNeeded;
};

#endif
