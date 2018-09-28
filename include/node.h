//input.h
#ifndef __node__
#define __node__
#include <vector>
#include <string>

using namespace std;

class node {
	public:
		string type;
		string comment;
		Node()
		{
			type = "root" // this is the base node class 
		}


};

#endif
