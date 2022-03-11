/*
@file classicGrid.cpp
@Brief: This is the implementation file for the classicGrid.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Grid.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Constructor for random generation
classicGrid::classicGrid(int height, int width, double density){
  this->height = height;
  this->width = width;

  // Padding inserts a one-space border around the grid to assist with
  // counting neighbors, but is not displayed to the user
  this->padded_height = height + 2;
  this->padded_width = width + 2;

  // Initializing grid
  pp_cGrid = new char* [padded_height];

  for(int i = 0; i < padded_height; i++){
    pp_cGrid[i] = new char[padded_width];
  }

  // Set all spaces to empty
  for(int i = 0; i < padded_height; i++){
    for(int j = 0; j < padded_width; j++){
      pp_cGrid[i][j] = '-';
    }
  }

  // Randomly insert X's according to density input
  int numX = height * width * density;

  int i = 0;
  int j = 0;
  for(numX; numX > 0; numX--){
    do{
      i = rand() % height + 1;
      j = rand() % width + 1;
    }while(pp_cGrid[i][j] == 'X'); // Keep randomizing until empty location found

    pp_cGrid[i][j] = 'X';
  }

  // Initialize secondary grid as empty
  pp_cGrid_next = new char* [padded_height];

  for(int i = 0; i < padded_height; i++){
    pp_cGrid_next[i] = new char[padded_width];
  }

  for(int i = 0; i < padded_height; i++){
    for(int j = 0; j < padded_width; j++){
      pp_cGrid_next[i][j] = '-';
    }
  }
}

// Constructor for map file
classicGrid::classicGrid(string filepath){
  ifstream in_file;
  string nextLine;

  in_file.open(filepath);

  in_file >> this->height;
  in_file >> this->width;
  this->padded_height = height + 2;
  this->padded_width = width + 2;

  // Set size and shape of grid
  pp_cGrid = new char* [padded_height];

  for(int i = 0; i < padded_height; i++){
    pp_cGrid[i] = new char[padded_width];
  }

  // Read input file line by line and mark it on the grid
  for(int i = 1; i <= height; i++){
    in_file >> nextLine;

    for(int j = 1; j <= width; j++){

      pp_cGrid[i][j] = nextLine[j-1];

    }
  }

  // Add border padding around the grid
  for(int i = 0; i < padded_height; i++){
    pp_cGrid[i][0] = '-';
    pp_cGrid[i][padded_width-1] = '-';
  }

  for(int i = 0; i < padded_width; i++){
    pp_cGrid[0][i] = '-';
    pp_cGrid[padded_height-1][i] = '-';
  }

  in_file.close();

  // Initialize secondary grid as empty
  pp_cGrid_next = new char* [padded_height];

  for(int i = 0; i < padded_height; i++){
    pp_cGrid_next[i] = new char[padded_width];
  }

  for(int i = 0; i < padded_height; i++){
    for(int j = 0; j < padded_width; j++){
      pp_cGrid_next[i][j] = '-';
    }
  }
}

classicGrid::~classicGrid(){
  for(int i = 0; i < padded_height; i++){
    delete[] pp_cGrid[i];
  }
  delete[] pp_cGrid;
}

void classicGrid::display(){
  for(int i = 0; i < padded_height; i++){
    for(int j = 0; j < padded_width; j++){
      cout << pp_cGrid[i][j];
    }
    cout << endl;
  }
}

void classicGrid::nextGeneration(){
  int numNeighbors;

  // Loop through grid
  for(int i = 1; i < padded_height - 1; i++){
    for(int j = 1; j < padded_width - 1; j++){
      numNeighbors = 0;

      // Loop through neighbors of each space in grid
      for(int a = -1; a <= 1; a++){
        for(int b = -1; b <= 1; b++){

          if((a == 0) && (b == 0)){ // Don't count own space
            continue;
          }
          if(pp_cGrid[i+a][j+b] == 'X'){
            numNeighbors++;
          }

        }
      }

      // Set pp_cGrid_next based on numNeighbors of each space in pp_cGrid
      switch(numNeighbors){
        case 0:
        case 1:
          pp_cGrid_next[i][j] = '-';
          break;
        case 2:
          pp_cGrid_next[i][j] = pp_cGrid[i][j];
          break;
        case 3:
          pp_cGrid_next[i][j] = 'X';
          break;
        case 4:
          pp_cGrid_next[i][j] = '-';
          break;
        default:
          pp_cGrid_next[i][j] = '-';
          break;
      }
    }
  }
}

void classicGrid::print(){
  for(int i = 0; i < padded_height; i++){
    for(int j = 0; j < padded_width; j++){
      cout << pp_cGrid_next[i][j];
    }
    cout << endl;
  }
}

void classicGrid::writeFile(){

}
