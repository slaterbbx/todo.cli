//============================================================================
// Name        : jtdi.cpp
// Author      : vader::joker
// Version     : 0.0.1
// Copyright   : MIT
// Description : to:do list CLI in C++
//============================================================================

#include <iostream>
#include "DataHandler.h"

DataHandler Data;

int main(int argc, char* argv[]) {
	Data.FileAuthenticator();
	std::cout << "vader::joker" << std::endl; // prints vader::joker
	return 0;
}
