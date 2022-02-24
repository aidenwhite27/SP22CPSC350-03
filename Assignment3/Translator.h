/*
@file Translator.h
@Brief: This is the header file for the Translator.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

using namespace std;
#include <string>

class Translator{
public:
  // implement constructor and destructor
  Translator();
  ~Translator();
  string translateEnglishWord(string word);
  string translateEnglishSentence(string sent);
};
