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
  bool FirstUsage;
public:
  //next usage of this variable
  vNode* next;
  //previous usage of the variable
  vNode* prev;
  //node for the definition of a variable
  vNode(string n, vNode* previous=nullptr);
  //returns true if this variable's type is equal to the type
  bool isType(string type);
  //returns true if the type of the node is the same as this nodes type
  bool isSameType(vNode other);

  //getters
  string getVarType();
  string getName();
  bool isFirstUsage();

};




#endif
