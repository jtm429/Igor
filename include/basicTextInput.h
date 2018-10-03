#ifndef __basic_text_input__
#define __basic_text_input__
#include "input.h"
#include <iostream>
#include <string>

using namespace std;

class btin : public Input {

	private:
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
			cout <<"\033[34m\033[1m"<<question<<"\033[0m"<<endl;
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
