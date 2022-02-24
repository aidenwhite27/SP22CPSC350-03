/*
@file FileProcessor.h
@Brief: This is the header file for the FileProcessor.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(FileProcessor_H)
#define FileProcessor_H

#include <string>
using namespace std;

class FileProcessor{
public:
  // implement constructor and destructor
  FileProcessor();
  ~FileProcessor();
  void processFile(string inputfile, string outputfile);
};
#endif
