//Bamphiane Annie Phongphouthai
//bp8qg
//Sept 13, 2017
//sNode.h

#ifndef SNODE_H
#define SNODE_H

#include <iostream>
using namespace std;

class sNode{
 public:
  sNode();
  int getValue();
 private:
  int value;
  sNode *next;
  friend class stack;

};

#endif
