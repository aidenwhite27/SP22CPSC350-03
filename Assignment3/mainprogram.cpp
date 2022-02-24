/*
@file mainprogram.cpp
@Brief: This is the main function for the Tutnese translator.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "FileProcessor.h"
#include <iostream>
using namespace std;

// this should be everything needed in the main function
int main(){
  FileProcessor f; // using default constructor, you can overload
  // ask the user for input and output file names
  string inputFile;
  string outputFile;
  cout << "Please enter an input file name: " << endl;
  cin >> inputFile;
  cout << "Please enter an output file name: " << endl;
  cin >> outputFile;
  f.processFile(inputFile, outputFile);
  return 0;
}
