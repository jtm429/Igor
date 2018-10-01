//input.h
#ifndef __node__
#define __node__
#include <vector>
#include <string>

using namespace std;

class node {
	private:
		string type;
		string comment;
		vector<node> contains;
	public:
		// this is the base node class 
		node();


};

#endif
