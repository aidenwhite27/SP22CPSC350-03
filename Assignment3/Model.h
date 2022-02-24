/*
@file Model.h
@Brief: This is the header file for the Model.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(Model_H)
#define Model_H

using namespace std;
#include <string>

class Model{
public:
  // implement constructor and desctructor
  Model();
  ~Model();
  string translateStringCharacter(char c);
  string translateDoubleCharacter(char c);
};
#endif
