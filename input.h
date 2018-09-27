//input.h
#ifndef __input__
#define __input__
#include <vector>

using namespace std;

__interface Input {
	virtual int multiple_choice(vector<string> choices) = 0;
	virtual string free_response(string question) = 0;


}

#endif
