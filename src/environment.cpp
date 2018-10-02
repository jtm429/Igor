#include "environment.h"


igor_env::igor_env(int v = 20; int f = 20)
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

igor_env::makeSpace(bool inVars)
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

igor_env::addVariable(vNode var)
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

igor_env::addFunction(fNode fun)
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
