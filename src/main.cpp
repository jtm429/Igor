//stuff
#include <iostream>
#include <vector>
#include "input.h"
#include "basicTextInput.h"

int main()
{
	//basic text input
	btin basic = btin();
	//using a pointer so it can be changed
	Input *in = &basic;
	//choices vector
	vector<string> choices = vector<string>();
	//adding choices
	choices.add("nah, I'm good")
	choices.add("nah, I'm fine")
	//querying user
	std::string ans = in->multiple_choice("hey kids you want some <testing question>?",choices);
	//returning answer
	cout << "answer: " << ans << endl;
  	return 0;
}
