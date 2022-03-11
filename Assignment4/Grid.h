/*
@file Grid.h
@Brief: This is the header file for the classicGrid.cpp, doughnutGrid.cpp,
and mirrorGrid.cpp classes. It contains prototypes for the base class Grid as
well as its children classes.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(Grid_H)
#define Grid_H

#include <string>
using namespace std;

class Grid {
public:
  Grid(){}
  virtual ~Grid(){}
  char** pp_cGrid;
  int height;
  int width;
  virtual void display() = 0;
  virtual void nextGeneration() = 0;
  virtual void print() = 0;
  virtual void writeFile() = 0;
};

class classicGrid : public Grid{
public:
  classicGrid(int height, int width, double density);
  classicGrid(string filepath);
  ~classicGrid();
  char** pp_cGrid;
  char** pp_cGrid_next;
  int height;
  int width;
  int padded_height;
  int padded_width;
  void display();
  void nextGeneration();
  void print();
  void writeFile();

};

class doughnutGrid : public Grid{
public:
  doughnutGrid(int height, int width, double density);
  doughnutGrid(string filepath);
  ~doughnutGrid();
  char** pp_cGrid;
  char** pp_cGrid_next;
  int height;
  int width;
  int padded_height;
  int padded_width;
  void display();
  void nextGeneration();
  void print();
  void writeFile();

};

class mirrorGrid : public Grid{
public:
  mirrorGrid(int height, int width, double density);
  mirrorGrid(string filepath);
  ~mirrorGrid();
  char** pp_cGrid;
  char** pp_cGrid_next;
  int height;
  int width;
  int padded_height;
  int padded_width;
  void display();
  void nextGeneration();
  void print();
  void writeFile();

};
#endif
