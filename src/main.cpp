//stuff
#include <iostream>
#include <vector>
#include "input.h"
#include "basicTextInput.h"

using namespace std;
int main()
{
	//basic text input
	btin basic = btin();
	//using a pointer so it can be changed
	Input *in = &basic;
	//choices vector
	vector<string> choices = vector<string>();
	//adding choices
	choices.push_back("nah, I'm good");
	choices.push_back("nah, I'm fine");
	//querying user
	string ans = in->multiple_choice("hey kids you want some <testing question>?",choices);
	//returning answer
	cout << "answer: " << ans << endl;
  	return 0;
}
