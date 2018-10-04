#include "Colored_String.h"

string cstr::painthelper(string str, string color)
{
  if(color != curr)
  {
    prev = curr;
    curr = color;
    newstring = curr + str;
    return newstring
  }
  else return str;
}

cstr::cstr(string default_color=white)
{
  def = default_color;
  curr = def;
}

cstr::paintString(string a, string color=def)
{
  string out = painthelper(a, color);
  return out;
}
