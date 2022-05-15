/*
@file main.cpp
@Brief: This is the main function of the sorting program.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include <iostream>
#include <fstream>
#include <string>
#include "Sorter.h"
#include <vector>
#include <ctime>

using namespace std;

int main() {
  string filename;
  Sorter s;
  cout << "Please enter name of file to sort: " << endl;
  cin >> filename;
  cout << endl;

  s.readFile(filename);

  // Merge Sort
  time_t startTime = time(nullptr);
  s.mergeSort(s.nums2, 0, s.nums2.size() - 1);
  time_t endTime = time(nullptr);
  cout << "Merge Sort: " << endl;
  cout << "Time started: " << ctime(&startTime);
  cout << "Time ended: " << ctime(&endTime) << endl;

  // Selection Sort
  startTime = time(nullptr);
  s.selectionSort(s.nums1, s.nums1.size());
  endTime = time(nullptr);
  cout << "Selection Sort: " << endl;
  cout << "Time started: " << ctime(&startTime);
  cout << "Time ended: " << ctime(&endTime) << endl;

  // Insertion Sort
  startTime = time(nullptr);
  s.insertionSort(s.nums3, s.nums3.size());
  endTime = time(nullptr);
  cout << "Insertion Sort: " << endl;
  cout << "Time started: " << ctime(&startTime);
  cout << "Time ended: " << ctime(&endTime) << endl;

  return 0;
}
