#include <iostream>
#include <fstream>
#include <string>
#include "SLList.h"
#include "Sorter.h"

using namespace std;

int main() {
  ifstream in_file;
  string firstline;
  string line;
  int n;
  double num;

  in_file.open("1k.txt");

  getline(in_file, firstline);
  n = stoi(firstline);

  SLList<double> list1(n);
  SLList<double> list2(n);

  while(getline(in_file, line)){
    num = stod(line);
    //list1.append(num);
    list2.append(num);
  }
  in_file.close();

  //cout << list1.length() << endl;
  Sorter s;
  //s.selectionSort(list1);
  cout << "list2 length:" << list2.length() << endl;
  s.mergeSort(list2, 0, list2.length() - 1);

  // for(list1.moveToStart(); list1.currPos() < list1.length(); list1.next()){
  //   double item = list1.getValue();
  //   cout << item << endl;
  // }

  for(list2.moveToStart(); list2.currPos() < list2.length(); list2.next()){
    double item = list2.getValue();
    cout << item << endl;
  }

  return 0;
}
