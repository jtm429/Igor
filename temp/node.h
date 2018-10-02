//input.h
#ifndef __node__
#define __node__
#include <vector>
#include <string>

using namespace std;

class node {
	protected:
		string type;
		string comment;
		vector<node> contains;
	public:
		// this is the base node class
		node();
		//getters
		string getType();
		string getComment();
		//setters
		void setType(string t);
		void setComment(string com);
		//adds a node to contains
		void addNode(node newNode);

};

#endif
