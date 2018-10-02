#ifndef __environment_h__
#define __environment_h__
#include "var_node.h"
#include "funct_node.h"
#include <vector>


/*
  class for keeping track of what variables
  and functions are accessable at any time
*/
class igor_env
{
private:
  //size of variable array
  int num_vars;
  //size of function array
  int num_func;
  //variable iterator
  int vit;
  //function iterator
  int fit;
  //size boost amount
  int sba;


  //array of vars and functions usable in this environment
  vNode *vars[];
  fNode *funs[];
public:
  // constructor
  // v - size of variable array
  // f - size of function array
  igor_env(int v = 20, int f = 20);
  // adds a variable to this environment
  void addVariable(vNode var);
  // adds a function to this environment
  void addFunction(fNode func);
  //returns a vector with variables of the type
  vector<vNode> variablesOfType(string type);
  //returns a vector with functions that return the type
  vector<fNode> functionsThatReturnType(string type);

  //increase size of either array
  //inVars is true if space is needed in vars
  //          false if needed in funs
  void makeSpace(bool inVars);



}



#endif
