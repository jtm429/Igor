#include "node.h"

node::node()
{
	//initializing
	type = "root";
	comment = "";
	contains = vector<node>();
}

node::getType()
{
	return type;
}

node::getComment()
{
	return comment;
}

node::setType(string t)
{
	type = t;
}

node::setComment(string com)
{
	comment = com;
}

node::addNode(node newNode)
{
	contains.add(newNode);
}
