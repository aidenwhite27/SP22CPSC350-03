/*
@file FileChecker.h
@Brief: This is the header file for the FileChecker.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(FileChecker_H)
#define FileChecker_H

#include <string>
using namespace std;

class FileChecker{
public:
  // implement constructor and destructor
  FileChecker();
  ~FileChecker();
  void checkFile(string inputfile);
};
#endif
