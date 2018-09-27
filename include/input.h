//input.h
#ifndef __input__
#define __input__
#include <vector>
#include <string>

using namespace std;

class Input {
	public:
		//you provide options
		virtual int multiple_choice(string question, vector<string> choices) = 0;
		//they input what they want
		virtual string free_response(string question) = 0;


};

#endif
