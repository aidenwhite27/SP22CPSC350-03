/*
@Author: Aiden White
@Brief: This program accepts numeric inputs from the user until a negative
  value is entered. Then, it prints the sum of all positive values.
*/

#include <iostream>
using namespace std;

int main() {
  double num;
  double sum = 0;

  cout << "Please enter a price: " << endl;
  cin >> num;

  while(num >= 0) {
    sum += num;
    cin >> num;
  }

  cout << "Total cost: " << sum << endl;

  return 0;
}
