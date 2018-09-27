//input.h
#ifndef __input__
#define __input__
#include <vector>

using namespace std;

__interface Input {
	public:
		//you provide options
		virtual int multiple_choice(string question, vector<string> choices) = 0;
		//they input what they want
		virtual string free_response(string question) = 0;


};

#endif
