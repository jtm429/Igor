#ifndef __environment_h__
#define __environment_h__
#include "var_node.h"
#include "func_node.h"



/*
  class for keeping track of what variables
  and functions are accessable at any time
*/
class igor_env
{
private:
  //default size of variable array
  int num_vars = 20;
  //default size of function array
  int num_func = 20;

  //array of vars and functions usable in this environment
  vNode *vars[];
  fNode *funs[];
public:
  // constructor
  // v - size of variable array
  // f - size of function array
  igor_env(int v = 0, int f = 0);
  // adds a variable to this environment
  void addVariable(vNode var);
  // adds a function to this environment
  void addFunction(fNode func);



}



#endif
