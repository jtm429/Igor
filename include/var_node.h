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
  //node for the definition of a function
  vNode(string name);

};




#endif
