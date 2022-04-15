#include "DLQueue.h"
#include "student.h"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){
  std::ifstream in_file;
  int windowCount;
  int time = 0;
  int nextTime;
  int studentsToCreate;
  int timeNeeded;
  student student;

  in_file.open(argv[0]);
  DLQueue<student> studentQueue;

  //create windows array and initialize them to zero
  in_file >> windowCount;
  int windows[windowCount];
  for(int i = 0; i < windowCount; i++){
    windows[i] = 0;
  }

  while(!in_file.eof()){
    in_file >> nextTime;

    if(time == nextTime){ //if global time is at next read time
      in_file >> studentsToCreate;
      for(int i = 0; i < studentsToCreate; i++){ //create and enqueue students for that time
        in_file >> timeNeeded;
        student = new student(time, timeNeeded)
        studentQueue->enqueue(student);
      }
    }

    for(int i = 0; i < windowCount; i++){ //decrement window values
      windows[i]--;
    }

    time++;
  }


  in_file.close();
  return 0;
}
