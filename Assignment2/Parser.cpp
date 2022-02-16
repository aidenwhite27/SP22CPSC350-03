/*
@file Parser.cpp
@Brief: This is the implementation file for the Parser.cpp class.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#include "Parser.h"
#include <fstream>
using namespace std;

Parser::Parser(string inputStr){
  this->inputStr = inputStr;
  alphas = 0;
  nonAlphas = 0;
  average = 0.0;
  numPairs = 0;
  a_count = b_count = c_count = d_count = e_count = f_count = g_count =
  h_count = i_count = j_count = k_count = l_count = m_count = n_count =
  o_count = p_count = q_count = r_count = s_count = t_count = u_count =
  v_count = w_count = x_count = y_count = z_count = 0;
}

/*
count()
Loops through the input string, computing the number of each letter and
incrementing the number of alphas, or otherwise incrementing nonAlphas. Also
computes the average.
@param none
@return void
*/
void Parser::count(){

  char current = 0;
  for(int i = 0; i < inputStr.length(); i++){
    current = inputStr[i];

    switch(current){
      case 'a':
        a_count++;
        alphas++;
        break;
      case 'b':
        b_count++;
        alphas++;
        break;
      case 'c':
        c_count++;
        alphas++;
        break;
      case 'd':
        d_count++;
        alphas++;
        break;
      case 'e':
        e_count++;
        alphas++;
        break;
      case 'f':
        f_count++;
        alphas++;
        break;
      case 'g':
        g_count++;
        alphas++;
        break;
      case 'h':
        h_count++;
        alphas++;
        break;
      case 'i':
        i_count++;
        alphas++;
        break;
      case 'j':
        j_count++;
        alphas++;
        break;
      case 'k':
        k_count++;
        alphas++;
        break;
      case 'l':
        l_count++;
        alphas++;
        break;
      case 'm':
        m_count++;
        alphas++;
        break;
      case 'n':
        n_count++;
        alphas++;
        break;
      case 'o':
        o_count++;
        alphas++;
        break;
      case 'p':
        p_count++;
        alphas++;
        break;
      case 'q':
        q_count++;
        alphas++;
        break;
      case 'r':
        r_count++;
        alphas++;
        break;
      case 's':
        s_count++;
        alphas++;
        break;
      case 't':
        t_count++;
        alphas++;
        break;
      case 'u':
        u_count++;
        alphas++;
        break;
      case 'v':
        v_count++;
        alphas++;
        break;
      case 'w':
        w_count++;
        alphas++;
        break;
      case 'x':
        x_count++;
        alphas++;
        break;
      case 'y':
        y_count++;
        alphas++;
        break;
      case 'z':
        z_count++;
        alphas++;
        break;
      default:
        nonAlphas++;
        break;
    }
  }
  average = (double) alphas / inputStr.length();
}

/*
pairs()
Loops through each index of the input string after zero, checking if it is equal
to the previous value. If so, numPairs is incremented.
@param none
@return void
*/
void Parser::pairs(){
  for(int i = 1; i < inputStr.length(); i++){
    if(inputStr[i] == inputStr [i-1]){
      numPairs++;
    }
  }
}

/*
write()
Writes results to a file called "output.txt"
@param none
@return void
*/
void Parser::write(){
  ofstream out_file;
  out_file.open("output.txt");

  out_file << "a:" << a_count << endl;
  out_file << "b:" << b_count << endl;
  out_file << "c:" << c_count << endl;
  out_file << "d:" << d_count << endl;
  out_file << "e:" << e_count << endl;
  out_file << "f:" << f_count << endl;
  out_file << "g:" << g_count << endl;
  out_file << "h:" << h_count << endl;
  out_file << "i:" << i_count << endl;
  out_file << "j:" << j_count << endl;
  out_file << "k:" << k_count << endl;
  out_file << "l:" << l_count << endl;
  out_file << "m:" << m_count << endl;
  out_file << "n:" << n_count << endl;
  out_file << "o:" << o_count << endl;
  out_file << "p:" << p_count << endl;
  out_file << "q:" << q_count << endl;
  out_file << "r:" << r_count << endl;
  out_file << "s:" << s_count << endl;
  out_file << "t:" << t_count << endl;
  out_file << "u:" << w_count << endl;
  out_file << "v:" << v_count << endl;
  out_file << "w:" << w_count << endl;
  out_file << "x:" << x_count << endl;
  out_file << "y:" << y_count << endl;
  out_file << "z:" << z_count << endl;
  out_file << "alphabets:" << alphas << endl;
  out_file << "non-alphabets:" << nonAlphas << endl;
  out_file << "average:" << average << endl;
  out_file << "pairs:" << numPairs << endl;
}
