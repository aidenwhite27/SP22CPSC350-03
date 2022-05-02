#if !defined(Student_H)
#define Student_H

#include <string>

class Student {
public:
  Student();
  Student(int studentID);
  ~Student();
  int studentID;
  std::string name;
  std::string level;
  std::string major;
  double gpa;
  int advisor;
  bool operator==(const Student& s);
  bool operator<(const Student& s);
  bool operator>(const Student& s);
};
#endif
