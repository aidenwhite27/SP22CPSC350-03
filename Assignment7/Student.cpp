#include "Student.h"

Student::Student(){

}

Student::Student(int studentID){
  this->studentID = studentID;
}

Student::~Student(){

}

bool Student::operator==(const Student& s){
  if(this->studentID == s.studentID){
    return true;
  }
  else{
    return false;
  }
}

bool Student::operator<(const Student& s){
  if(this->studentID < s.studentID){
    return true;
  }
  else{
    return false;
  }
}

bool Student::operator>(const Student& s){
  if(this->studentID > s.studentID){
    return true;
  }
  else{
    return false;
  }
}
