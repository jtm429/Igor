#ifndef __funct_node__
#define __funct_node__
#include "node.h"
#include "var_node.h"

using namespace std;

class fNode : public node {
private:
  //name of the function
  string name;
  //arguments
  vector<vNode> args;
  //return type
  string ret_type;

public:
  //node for the definition of a function
  fNode(string name);
  //returns a node containing a call to this function
  vNode call();
  //returns the return type of this function(Default="void")
  string returns();
};




#endif
