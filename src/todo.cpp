//============================================================================
// Name        : Just TODO it
// Author      : vader::joker
// Version     : 0.0.1
// Description : todo list CLI in C++
// inotifywait -m -e CLOSE_WRITE --format="Debug/todo" Debug/ | sh
//
//============================================================================

#include <iostream>
#include "DataHandler.h"

DataHandler DataHandler;

int main(int argc, char* argv[]) {

	std::cout << "-------- MAIN FUNCTION" << std::endl;

	if(DataHandler.FileAuthenticator("yet.todo")){
		std::cout << "This is because yet.todo is a file in the directory" << std::endl;
	}else {
		std::cout << "This is because yet.todo does not" << std::endl;
	};

//	DataHandler.FileManager(1, "../.todo/list.todo");
	 DataHandler.Init();

	return 0;
}
