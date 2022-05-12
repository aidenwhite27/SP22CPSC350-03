/*
@file Sorter.h
@Brief: This is the header file for the Sorter.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(Sorter_H)
#define Sorter_H

#include "SLList.h"
#include <string>
using namespace std;

class Sorter{
public:
  // implement constructor and destructor
  Sorter();
  ~Sorter();
  void merge(SLList<double> &list, int i, int j, int k);
  void mergeSort(SLList<double> &list, int i, int k);
  void selectionSort(SLList<double> &list);
  void thirdSort();
};
#endif
