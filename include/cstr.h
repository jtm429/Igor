#ifndef __CSTR_H__
#define __CSTR_H__
#include <string>


using namespace std;

class cstr
{
private:
  string painthelper(string str, string color);


public:
  //colors
  string black    = "\033[30m";
  string red      = "\033[31m";
  string green    = "\033[32m";
  string yellow   = "\033[33m";
  string blue     = "\033[34m";
  string magenta  = "\033[35m";
  string cyan     = "\033[36m";
  string white    = "\033[37m";

  //default color
  string def;
  //previous color
  string prev;
  //current color
  string curr;

  cstr(string default_color);


string paintString(string a, string color=def);
};


#endif