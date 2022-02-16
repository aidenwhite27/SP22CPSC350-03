/*
@file Parser.h
@Brief: This is the header file for the Parser.cpp class. It includes variable
  declarations and function prototypes.
@Author: Aiden White
CPSC 350-03 Data Structures and Algorithms
*/

#if !defined(Parser_H)
#define Parser_H

#include <iostream>
#include <string>

using namespace std;

class Parser {
public:
  string inputStr;
  int alphas;
  int nonAlphas;
  double average;
  int numPairs;
  int a_count, b_count, c_count, d_count, e_count, f_count, g_count, h_count,
    i_count, j_count, k_count, l_count, m_count, n_count, o_count, p_count,
    q_count, r_count, s_count, t_count, u_count, v_count, w_count, x_count,
    y_count, z_count;
  Parser(string inputStr);
  void count();
  void pairs();
  void write();
};
#endif
