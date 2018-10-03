#include "Colored_String.h"

string cstr::painthelper(string str, string color)
{
  prev = curr;
  curr = color;
  newstring = curr + str + prev;
}

cstr::cstr(string default_color)
{
  def = default_color;
  curr = def;
}

cstr::paintString(string a, string color=def)
{
  string out = painthelper(a, color);
  return out;
}
