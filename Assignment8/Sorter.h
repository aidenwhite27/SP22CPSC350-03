/*
@file Sorter.h
@Brief: This is the header file for the Sorter.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(Sorter_H)
#define Sorter_H

#include <string>
#include <vector>
using namespace std;

class Sorter{
public:
  vector<double> nums1;
  vector<double> nums2;
  vector<double> nums3;
  Sorter();
  ~Sorter();
  void readFile(string filename);
  void merge(vector<double> &nums, int s, int m, int e);
  void mergeSort(vector<double> &nums, int s, int e);
  void selectionSort(vector<double> &nums, int n);
  void insertionSort(vector<double> &nums, int n);
};
#endif
