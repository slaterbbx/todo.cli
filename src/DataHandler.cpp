#include <iostream>
#include <fstream>
#include <filesystem>
#include "DataHandler.h"

// Worker function used by DataHandler::FileAuthenticator to check file existence
bool fileExists(const char* fileName){

	if(std::filesystem::exists(fileName)){
		std::cout << "File " << fileName << " exists" << std::endl;
		return true;
	}

	std::cout << "File does not exist, we shall create one" << std::endl;
	return false;

};

int DataHandler::FileAuthenticator(){

	// Open file with todo list in it, if none, create empty file.
	if(fileExists("yet.todo")){
		// do nothing for now
	}else {
		// create file with ofstream by opening it for the first time
		std::ofstream yetTodo ("yet.todo");
		yetTodo << "| | 1. 'get todo list cli app finished'";
		yetTodo.close();
	}

	if(fileExists("done.todo")){
		// do nothing for now
	}else {
		// create file with ofstream by opeining it for the first time
		std::ofstream doneTodo ("done.todo");
		doneTodo << "|x| 2. 'heat up a cup of coffee'";
		doneTodo.close();
	}

	return 0;
}

