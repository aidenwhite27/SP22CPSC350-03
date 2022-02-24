/*
@file Model.cpp
@Brief: This is the implementation file for the Model.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Model.h"
#include <iostream>
#include <string>

using namespace std;

Model::Model(){

}

Model::~Model(){

}

/*
translateStringCharacter()
Takes an English letter as input and returns a string representing its
Tutnese equivalent.
@param char c
@return string
*/
string Model::translateStringCharacter(char c){
  // add code to translate each letter
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        string vowel;
        return vowel += c;
      }
  else{
    switch(c){
      case 'B':
        return "Bub";
        break;
      case 'b':
        return "bub";
        break;
      case 'C':
        return "Cash";
        break;
      case 'c':
        return "cash";
        break;
      case 'D':
        return "Dud";
        break;
      case 'd':
        return "dud";
        break;
      case 'F':
        return "Fuf";
        break;
      case 'f':
        return "fuf";
        break;
      case 'G':
        return "Gug";
        break;
      case 'g':
        return "gug";
        break;
      case 'H':
        return "Hash";
        break;
      case 'h':
        return "hash";
        break;
      case 'J':
        return "Jay";
        break;
      case 'j':
        return "jay";
        break;
      case 'K':
        return "Kuck";
        break;
      case 'k':
        return "kuck";
        break;
      case 'L':
        return "Lul";
        break;
      case 'l':
        return "lul";
        break;
      case 'M':
        return "Mum";
        break;
      case 'm':
        return "mum";
        break;
      case 'N':
        return "Nun";
        break;
      case 'n':
        return "nun";
        break;
      case 'P':
        return "Pub";
        break;
      case 'p':
        return "pub";
        break;
      case 'Q':
        return "Quack";
        break;
      case 'q':
        return "quack";
        break;
      case 'R':
        return "Rug";
        break;
      case 'r':
        return "rug";
        break;
      case 'S':
        return "Sus";
        break;
      case 's':
        return "sus";
        break;
      case 'T':
        return "Tut";
        break;
      case 't':
        return "tut";
        break;
      case 'V':
        return "Vuv";
        break;
      case 'v':
        return "vuv";
        break;
      case 'W':
        return "Wack";
        break;
      case 'w':
        return "wack";
        break;
      case 'X':
        return "Ex";
        break;
      case 'x':
        return "ex";
        break;
      case 'Y':
        return "Yub";
        break;
      case 'y':
        return "yub";
        break;
      case 'Z':
        return "Zub";
        break;
      case 'z':
        return "zub";
        break;
    }
  }
}

/*
translateDoubleCharacter()
Take an English character as input and returns a string representing its
Tutnese equivalent, assuming that it is a double letter.
@param char c
@return string
*/
string Model::translateDoubleCharacter(char c){
  // add code to describe scenario for letter pairs
  // if vowel -> add prefix "squat" then repeat vowel "oo" becomes "squato"
  // if consonant -> add prefix "squa" then converted consonant "ll" becomes "squatlul"

  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return "squat" + translateStringCharacter(c);
      }
  else{
    return "squa" + translateStringCharacter(c);
  }
}
