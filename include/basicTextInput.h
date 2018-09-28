#ifndef __basic_text_input__
#define __basic_text_input__
#include "input.h"
#include <iostream>
#include <string>

using namespace std;

class btin : public Input {

	private:
		/**
		 * implement this as an enum instead of this garbage
		//txt = [0,1,4,7,21,24,27]; // [reset,bold,underline,inverse,bold off,underline off,inverse off]
		map<string, string> txt{{"reset","0"},{"bold","1"},{"underline","4"},{"inverse","7"} };
		//I dont have much time and I want to finish what I'm doing I'll add the others later if I need them
		map<string, string> cvals{{"white","37"},{"red","31"},{"blue","34"},{"magenta","35"} };
		//esc code gen
		string setStyle(string color,string textformat)
		{
			string col = cvals[color];
			string format = txt[textformat];
			string esc = "/033["+txt[textformat]+";"+cvals[color]+"m";
			return esc;
		}**/
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
			getline(cin,a);
			return a;
		}
		



};

#endif
