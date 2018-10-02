#include "environment.h"


igor_env::igor_env(int v = 20, int f = 20)
{
  num_vars = v;
  num_func = f;
  vars = *vNode[v];
  funs = *fNode[f];
  vit = 0;
  fit = 0;
  //default sizeboostamount
  sba = 10;

}
vector<vNode> igor_env::variablesOfType(string type)
{
  vector<vNode> nodes = vector<vNode>();
  for(int i = 0; i < num_vars;i++)
  {
    if(vars[i]->isType(type))
    {
      nodes.push_back((*vars[i]));
    }
  }
  return nodes;
}

vector<fNode> igor_env::functionsThatReturnType(string type)
{
  vector<fNode> nodes = vector<fNode>();
  for(int i = 0; i < num_func; i++)
  {
    if(funs[i]->returns()==type)
    {
      nodes.push_back((*funs[i]));
    }
  }
  return nodes;
}

void igor_env::makeSpace(bool inVars)
{

  if(inVars)
  {

    vNode *nw[] = boost(vars, num_vars+sba, num_vars );
    vars = nw;
    num_vars+=sba;
  }
  else {
    fNode *nw[] = boost(funs, num_func+sba, num_func );
    funs = nw;
    num_vars+=sba;

  }

}

//yeah theres no way I'm not gonna have to debug this nightmare later
template <class SomeType>
*SomeType[] boost(SomeType *arr[], int newSize, int oldSize)
{
  SomeType *nw[] = *SomeType[newSize];
  for(int i = 0; i < oldSize;i++)
  {
    nw = arr[i];
  }
  return nw;
}

void igor_env::addVariable(vNode var)
{
  if(vit < num_vars)
  {
    vars[vit] = &var;
    vit++;
  }
  else {
    //raise the size of array
    makeSpace(1);
    vars[vit] = &var;
    vit++;
  }
}

void igor_env::addFunction(fNode fun)
{
  if(fit < num_func)
  {
    funs[fit] = &fun;
    fit++;
  }
  else {
    //raise the size of array
    makeSpace(0);
    funs[fit] = &fun;
    fit++;
  }
}
