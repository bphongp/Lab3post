//Bamphiane Annie Phongphouthai
//bp8qg
//Sept 13, 2017
//stack.cpp

#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

stack:: stack(){  //default constructor
  head= new sNode;
  head=NULL;
  count =0;
}
stack:: ~stack(){
}
void stack::push(int i){
  sNode* nnode = new sNode();//create new node
  sNode* temp = head;        //temp pointer for head to keep track
  nnode->value=i;
  if(head==NULL){            //if list empty and first node to be pushed on stack
    head=nnode;              
    nnode->next=NULL;
  }
  else{                      //if list already has nodes
    nnode->next =head;
    head =nnode;
  }
  count++;
}

int stack::top(){
  sNode *temp =head;          //keep temp pointer to know where head is
  return temp->getValue();
}

void stack::pop(){
  sNode *temp =head; 
  head = head->next;
  delete(temp);
}
bool stack::empty(){
  if(count==0){
    return true;
  }
  return false;
}
