#include "var_node.h"

vNode :: vNode(string n, vNode* previous=nullptr)
{
  //setting node type
  setType("var");
  name = n;
  prev = previous;
  //if previous was not null
  if(prev)
  {
    //set its next ptr equal to this
    prev.next = this;
  }

}

bool isType(string type)
{
  bool tru = (type == getVarType());
  return tru;
}

bool isSameType(vNode other)
{
  bool tru = (other.isType(var_type));
  return tru;

}

string vNode :: getVarType()
{
  return var_type;
}
string vNode::getName()
{
  return name;
}
bool vNode::isFirstUsage()
{
  return isFirstUsage;
}
