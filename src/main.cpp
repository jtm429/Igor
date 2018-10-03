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
	cout << "creating basic text input" << endl;
	//using a pointer so it can be changed
	Input *in = &basic;
	cout << "assigning it to input pointer" << endl;
	//choices vector
	vector<string> choices = vector<string>();
	cout << "creating vector for choices" << endl;
	//adding choices
	choices.push_back("nah, I'm good");
	choices.push_back("nah, I'm fine");
	cout << "adding choices" << endl;
	//querying user
	string ans = ""+(in->multiple_choice("hey kids you want some <testing question>?",choices));
	//returning answer
	cout << "answer: " << ans << endl;
	
  	return 0;
}
