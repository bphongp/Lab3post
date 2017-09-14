//Bamphiane Annie Phongphouthai
//bp8qg
//Sept 13, 2017
//stack.h

#ifndef STACK_H
#define STACK_H
#include<iostream>
#include "sNode.h"

using namespace std;

class stack{
 public:
  stack();
  ~stack();
  void push(int i);
  void pop();
  int top();
  bool empty();

 private:
  sNode *head;
  int count;
};
#endif
  
