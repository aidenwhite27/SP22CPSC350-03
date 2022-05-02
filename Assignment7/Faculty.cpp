#include "Faculty.h"

Faculty::Faculty(){

}

Faculty::~Faculty(){

}

bool Faculty::operator==(const Faculty& f){
  if(this->facultyID == f.facultyID){
    return true;
  }
  else{
    return false;
  }
}

bool Faculty::operator<(const Faculty& f){
  if(this->facultyID < f.facultyID){
    return true;
  }
  else{
    return false;
  }
}

bool Faculty::operator>(const Faculty& f){
  if(this->facultyID > f.facultyID){
    return true;
  }
  else{
    return false;
  }
}
