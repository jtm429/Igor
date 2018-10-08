//stuff
#include <iostream>
#include <vector>
#include "input.h"
#include "btin.h"

using namespace std;
int main()
{
	basic_ostream logg = clog;
	//basic text input
	btin basic = btin();
	logg << "creating basic text input" << endl;
	//using a pointer so it can be changed
	Input *in = &basic;
	logg << "assigning it to input pointer" << endl;
	//choices vector
	vector<string> choices = vector<string>();
	logg << "creating vector for choices" << endl;
	//adding choices
	choices.push_back("nah, I'm good");
	choices.push_back("nah, I'm fine");
	logg << "adding choices" << endl;
	//querying user
	string ans = ""+(in->multiple_choice("hey kids you want some <testing question>?",choices));
	//returning answer
	cout << "answer: " << ans << endl;

  	return 0;
}
