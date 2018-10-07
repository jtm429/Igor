#include "cstr.h"

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
  //because it hasnt been changed to the default yet
  curr = "null"
}

string cstr::paintString(string a, string color="null")
{
  if(color == "null")
    color = def;
  string out = painthelper(a, color);
  return out;
}
