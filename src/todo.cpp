//============================================================================
// Name        : Just TODO it
// Author      : vader::joker
// Version     : 0.0.1
// Description : todo list CLI in C++
//============================================================================

#include <iostream>
#include "DataHandler.h"

DataHandler Data;

int main(int argc, char* argv[]) {
	Data.FileAuthenticator("yet.todo");
	Data.FileAuthenticator("done.todo");
	std::cout << "vader::joker" << std::endl; // prints vader::joker
	return 0;
}
