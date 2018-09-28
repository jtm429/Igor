//stuff
#include <iostream>
#include <vector>
#include "input.h"
#include "basicTextInput.h"

int main()
{
	btin basic = btin();
	Input *in = &basic;
	std::string ans = in->free_response("test question");
	cout << "answer: " << ans << endl;
  	return 0;
}
