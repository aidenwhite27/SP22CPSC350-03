/*
@file Sorter.cpp
@Brief: This is the implementation file for the Sorter.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Sorter.h"
#include <fstream>
using namespace std;

// Constructor
Sorter::Sorter(){
  vector<double> nums1;
  vector<double> nums2;
  vector<double> nums3;
}

// Destructor
Sorter::~Sorter(){

}

/*
readFile()
Takes a text file containing decimal numbers and stores them in the three member
vectors of the sorter class.
@param string fileName
@return void
*/
void Sorter::readFile(string filename){
  ifstream in_file;
  string line;
  double num;

  in_file.open(filename);

  getline(in_file, line);

  while(getline(in_file, line)){
    num = stod(line);
    nums1.push_back(num);
    nums2.push_back(num);
    nums3.push_back(num);
  }

  in_file.close();
}

/*
merge()
Used by the mergeSort() function to temporarily store numbers in smaller vectors,
then combine them in order back into the original complete vector.
@param vector<double> &nums: reference to the complete unsorted vector
@param int s: starting index of sort
@param int m: middle index that divides left and right sides
@param int e: last index to be sorted
@return void
*/
void Sorter::merge(vector<double> &nums, int s, int m, int e){

  int i , j;
  i = s;
  j = m + 1;
  vector<double> temp;

  while(i <= m && j <= e){ // while both left and right vectors have numbers remaining,
    if(nums[i] <= nums[j]){ // push them to the temporary vector in ascending order
      temp.push_back(nums[i]);
      ++i;
    }
    else{
      temp.push_back(nums[j]);
      ++j;
    }
  }

  while(i <= m){ // finish pushing numbers from left if necessary
    temp.push_back(nums[i]);
    ++i;
  }

  while(j <= e){ // finish pushing numbers from right if necessary
    temp.push_back(nums[j]);
    ++j;
  }

  for(int i = s; i <= e; ++i){ // write from temporary array to original
    nums[i] = temp[i-s];
  }
}

/*
mergeSort()
Makes recursive calls which divide the numbers vector into smaller and smaller
vectors until they reach size 1, which is sorted by definition. Then, calls
the merge function to combine the small vectors into the original vector in order.
@param vector<double> &nums: reference to the complete unsorted vector
@param int s: starting index of sort
@param int e: last index to be sorted
@return void
*/
void Sorter::mergeSort(vector<double> &nums, int s, int e){

  if (s < e) {
    int m = (s + e) / 2;

    mergeSort(nums, s, m);
    mergeSort(nums, m + 1, e);

    merge(nums, s, m, e);
  }
}

/*
selectionSort()
Finds the maximum value of the unsorted vector and swaps it with the last value.
Then, decrements the size of the unsorted vector and repeats, until index 0
is reached and the vector has been sorted.
@param vector<double> &nums: reference to the complete unsorted vector
@param int n: size of the vector
@return void
*/
void Sorter::selectionSort(vector<double> &nums, int n){

  int lastUnsorted = n - 1; //set last unsorted to index of last value

  for(int i = 0; i <= lastUnsorted; lastUnsorted--){
    double max = nums[i]; //set max to first value
    int maxPos = i; //set maxPos for swap later

    for(int j = 0; j <= lastUnsorted; j++){
      if(nums[j] > max){ //if current value is greater than max, set max to it
        max = nums[j];
        maxPos = j;
      }
    }
    //swap max with the last unsorted value
    nums[maxPos] = nums[lastUnsorted];
    nums[lastUnsorted] = max;
  }
}

/*
insertionSort()
Starts at index 1 and compares value with previous values, swapping one by one
until they are in order. Then increments index and repeats.
@param vector<double> &nums: reference to the complete unsorted vector
@param int n: size of vector
@return void
*/
void Sorter::insertionSort(vector<double> &nums, int n){

  int i, j;
  i = j = 0;
  double temp = 0;

  for(i = 1; i < n; i++){ //sort values starting at index 1
    j = i;
    while(j > 0  && nums[j] < nums[j - 1]){ //compare value with previous value
      temp = nums[j];
      nums[j] = nums[j - 1];
      nums[j - 1] = temp;
      j--;
    }
  }
}
