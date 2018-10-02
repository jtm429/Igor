#include "node.h"

node::node()
{
	//initializing
	type = "root";
	comment = "";
	contains = vector<node>();
}

string node::getType()
{
	return type;
}

string node::getComment()
{
	return comment;
}

void node::setType(string t)
{
	type = t;
}

void node::setComment(string com)
{
	comment = com;
}

void node::addNode(node newNode)
{
	contains.add(newNode);
}
