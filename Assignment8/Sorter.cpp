/*
@file Sorter.cpp
@Brief: This is the implementation file for the Sorter.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Sorter.h"
#include <fstream>
#include <iostream>
using namespace std;

Sorter::Sorter(){

}

Sorter::~Sorter(){

}

void Sorter::merge(SLList<double> &list, int i, int j, int k){
  int mergedSize = k - i + 1;
  int mergePos = 0;
  int leftPos = 0;
  int rightPos = 0;
  //SLList<double> mergedNumbers(mergedSize);
  //SLList<double> *mergedNumbers;
  //mergedNumbers = new SLList<double>(mergedSize);
  double *mergedNumbers = new double[mergedSize];
  cout << "mergedNumbers created" << endl;
  leftPos = i;
  rightPos = j + 1;

  while((leftPos <= j) && (rightPos <= k)){
    cout << "while loop entered" << endl;
    cout << "left pos:" << leftPos << "right pos:" << rightPos << endl;
    cout << "length" << list.length() << endl;
    if(list.getValue(leftPos) <= list.getValue(rightPos)){
      cout << "condition checked" << endl;
      mergedNumbers[mergePos] = list.getValue(leftPos);
      ++leftPos;
      cout << "if block executed" << endl;
    }
    else{
      cout << "else block entered" << endl;
      mergedNumbers[mergePos] = list.getValue(rightPos);
      ++rightPos;
      cout << "else block executed" << endl;
    }
    ++mergePos;
  }

  while(leftPos <= j){
    mergedNumbers[mergePos] = list.getValue(leftPos);
    ++leftPos;
    ++mergePos;
  }

  while(rightPos <= k){
    mergedNumbers[mergePos] = list.getValue(rightPos);
    ++rightPos;
    ++mergePos;
  }

  //list.clear();
  for(mergePos = 0; mergePos < mergedSize; ++mergePos){
    cout << "copy loop entered" << endl;
    //numbers[i + mergePos] = mergedNumbers[mergePos];
    //list.append(mergedNumbers->getValue(mergePos));
    //list.append(mergedNumbers[mergePos]);
    list.moveToPos(i + mergePos);
    list.insert(mergedNumbers[mergePos]);
  }
}

/*
processFile()
Takes a text file containing English text and writes to an output file the
equivalent Tutnese text by calling Translator.translateEnglishSentence() on
each line.
@param string inputName, string outputName
@return void
*/
void Sorter::mergeSort(SLList<double> &list, int i, int k){
  int j = 0;
  cout << "mergeSort called" << endl;
  if (i < k) {
    j = (i + k) / 2;

    mergeSort(list, i, j);
    mergeSort(list, j + 1, k);

    merge(list, i, j, k);
    cout << "merge called" << endl;
  }
}

void Sorter::selectionSort(SLList<double> &list){

  int lastUnsorted = list.length(); //set last unsorted to one past last value

  for(list.moveToStart(); list.currPos() < lastUnsorted; lastUnsorted--){
    double max = list.getValue(); //set max to first value
    int maxPos = list.currPos(); //set maxPos for removal later

    for(list.moveToStart(); list.currPos() < lastUnsorted; list.next()){
      if(list.getValue() > max){ //if current value is greater than max, set max to it
        max = list.getValue();
        maxPos = list.currPos();
      }
    }

    list.insert(max); //insert max at lastUnsorted
    list.moveToPos(maxPos);
    list.remove(); //remove max from previous location
    list.moveToStart();
  }
}

void Sorter::thirdSort(){

}
