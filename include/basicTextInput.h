#ifndef __basic_text_input__
#define __basic_text_input__
#include "input.h"
#include <iostream>
#include <string>

using namespace std;

class btin : public Input {

	public:
		int multiple_choice(string question, vector<string> choices)
		{
			cout << question <<endl;
			cout << "Enter the value to select" <<endl;
			int size = choices.size();
			for(int i = 0; i < size;i++)
				cout << i << " - " << choices[i] << endl;
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
