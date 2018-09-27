#ifndef __basic_text_input__
#define __basic_text_input__
#include "input.h"
#include <iostream>

using namespace std;

class btin : public Input {

	public:
		int multiple_choice(string question, vector<string> choices)
		{
			cout << question <<endl;
			cout << "Enter the value to select" <<endl;
			for(int i = 0; i < choices.size();i++)
				cout << i << " - " << choices.get(i) << endl;
			int a;
			cin >> a;
			return a;
		}
		string free_response(string question)
		{
			string a;
			cout << question << endl;
			cin >> a;
			return a;
		}



};

#endif
