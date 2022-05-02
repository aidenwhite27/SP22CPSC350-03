#if !defined(Faculty_H)
#define Faculty_H

#include <string>

class Faculty {
public:
  Faculty();
  ~Faculty();
  int facultyID;
  std::string name;
  std::string level;
  std::string department;
  int advisees[];
  bool operator==(const Faculty& f);
  bool operator<(const Faculty& f);
  bool operator>(const Faculty& f);
};
#endif
