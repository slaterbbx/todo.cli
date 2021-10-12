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

	if(Data.FileAuthenticator("yet.todo")){
		std::cout << "This is because yet.todo exists" << std::endl;
	}else {
		std::cout << "This is because yet.todo does not exist" << std::endl;
	};

	std::cout << "vader::joker" << std::endl; // prints vader::joker
	return 0;
}
