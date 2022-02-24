/*
@file FileProcessor.cpp
@Brief: This is the implementation file for the FileProcessor.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "FileProcessor.h"
#include "Translator.h"  // Since I create an object of the Translator class, I have to include the Translator header file here
#include <fstream>
#include <iostream>
using namespace std;

FileProcessor::FileProcessor(){

}

FileProcessor::~FileProcessor(){

}

/*
processFile()
Takes a text file containing English text and writes to an output file the
equivalent Tutnese text by calling Translator.translateEnglishSentence() on
each line.
@param string inputName, string outputName
@return void
*/
void FileProcessor::processFile(string inputName, string outputName){
  // use fstream objects to read and write to files
  Translator converter; // here you can use an object of the Translator class
  // for each line of the input file, call the Translator object's translateEnglishSentence function
  ifstream in_file;
  ofstream out_file;

  string line;

  in_file.open(inputName);
  out_file.open(outputName);
  while(getline(in_file, line)){
    out_file << converter.translateEnglishSentence(line) << endl;
  }
  out_file.close();
  in_file.close();
}
