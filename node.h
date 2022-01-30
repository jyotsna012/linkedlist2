#pragma once
#include "Student.h"

class Node{

 public:
  //constructor
  Node(Student* newS);
 //get next
  Node* getNext();
  Student* getStudent();
 // set next
  void setNext(Node* nNext);
 //destructor
  ~Node();
 private:
 // variable for the node's student
  Student* student;
 //variable for next 
  Node* next;
};
