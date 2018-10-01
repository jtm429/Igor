#ifndef __var_node__
#define __var_node__
#include "node.h"

using namespace std;

class vNode : public node {
private:
  //can be class, int, etc.
  string var_type;
  //name of variable
  string name;

  //if this needs to initialize
  bool isFirstUsage;
public:
  //next usage of this variable
  vNode* next;
  //previous usage of the variable
  vNode* prev;
  //node for the definition of a variable
  vNode(string n, vNode* previous=nullptr);

  //getters
  string getVarType();
  string getName();
  bool isFirstUsage();

};




#endif
