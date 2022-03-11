/*
@file mainprogram.cpp
@Brief: This is the main function for the Game of Life.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Grid.h"
#include <iostream>

using namespace std;

int main() {
  //DIAG:
  //classicGrid *c = new classicGrid(5, 5, 0.7);
  //classicGrid *c = new classicGrid("testInput.txt");
  //c->display();
  //c->countNeighbors();
  //c->print();
  //delete c;
  int mode;
  string path;
  int choice;
  int output_type;

  cout << "Welcome to the Game of Life!" << endl;
  cout << "Please select a boundary mode(1 for classic, 2 for doughnut," <<
    " 3 for mirror): " << endl;
  cin >> mode;

  if(mode == 1){
    cout << "Please enter 1 to use a map file or 2 for random generation: " << endl;
    cin >> choice;

    if(choice == 1){
      cout << "Please enter a path to the map file: " << endl;
      cin >> path;

      classicGrid *grid = new classicGrid(path);
    }
    else if(choice == 2){
      cout << "Please enter the number of rows: " << endl;
      int height;
      cin >> height;
      cout << "Please enter the number of columns: " << endl;
      int width;
      cin >> width;
      cout << "Please enter the population density(0-1): " << endl;
      double density;
      cin >> density;

      classicGrid *grid = new classicGrid(height, width, density);
    }
  }
    cout << "How would you like to output?" << endl;
    cout << "Enter 1 to pause between generations, 2 for ENTER key progression," <<
      " or 3 to write to file: " << endl;
        cin >> output_type;

    switch(output_type){
      case 1:
        //grid->display();
        break;
      case 2:
        break;
      case 3:
        break;
      default:
        break;
    }



  return 0;
}
