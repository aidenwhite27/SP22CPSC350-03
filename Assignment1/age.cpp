/*
@Author: Aiden White
@Brief: This program accepts the ages of three people as user input. Then, it
  prints the oldest and youngest ages.
*/

#include <iostream>
using namespace std;

int main() {

  cout << "Please enter the ages of three people:" << endl;

  // Add the ages to an array of ints
  int ages[3];
  for(int i = 0; i < 3; i++){
    cin >> ages[i];
  }

  /*
  Initialize youngest and oldest values to the first input in the array. Then,
  compare the next two inputs to see if they are younger or older, and update
  the values accordingly.
   */
  int youngest = ages[0];
  int oldest = ages[0];
  for(int i = 1; i < 3; i++){
    if(ages[i] < youngest){
      youngest = ages[i];
    }
    if(ages[i] > oldest){
      oldest = ages[i];
    }
  }

  cout << "Oldest: " << oldest << " Youngest: " << youngest << endl;
  return 0;
}
