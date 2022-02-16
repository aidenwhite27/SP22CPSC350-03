/*
@file mainprogram.cpp
@Brief: This is the main function for the file Parser.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Parser.h"

using namespace std;

int main(){
  string input;
  getline(cin, input);
  Parser *p = new Parser(input);
  p->count();
  p->pairs();
  p->write();

  delete p;
  p = nullptr;
  return 0;
}
