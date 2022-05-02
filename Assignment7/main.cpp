#include "BST.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>

using namespace std;

int main(){
  BST<Student> studentTree;
  BST<Faculty> facultyTree;

  // Load trees from file or initialize
  Student s1(1);
  Student s2(1);
  studentTree.insert(new TreeNode<Student>(1, s1));
  studentTree.insert(new TreeNode<Student>(2, s2));

  cout << (s1 == s2) << endl;
  return 0;
}
