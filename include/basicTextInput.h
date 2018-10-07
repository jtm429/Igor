#ifndef __basic_text_input__
#define __basic_text_input__
#include "input.h"
#include "Colored_String.h"
#include <iostream>
#include <string>

using namespace std;

class btin : public Input {

	private:
		cstr goph = cstr(cstr.red);
		// enum Format {reset=0,bold=1,underline=4,inverse=7,unbold=21,rmund=24,unverse=27};

		// enum Color {white=37,red=31,blue=34,magenta=35 };
		//
		// // //esc code gen
		// // string setColor(Color col)
		// // {
		// // 	string esc = "/033["+rmat+";"+col+"m";
		// // 	return esc;
		// // }
	public:
		int multiple_choice(string question, vector<string> choices)
		{
			cout <<goph.paintString(question)<<endl;
			cout << goph.paintString("Enter the value to select", goph.blue) <<endl;
			int size = choices.size();
			for(int i = 0; i < size;i++)
				string cho = i + " - " + choices[i] +endl;
				cout << goph.paintString(cho, goph.blue) <<endl;

			int a;
			cin >> a;
			return a;
		}
		string free_response(string question)
		{
			string a;
			cout <<goph.paintString(question)<<endl;
			getline(cin,a);
			return a;
		}




};

#endif
