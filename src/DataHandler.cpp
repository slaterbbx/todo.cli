#include <iostream>
#include <fstream>
#include <filesystem>
#include "DataHandler.h"

// ### WORKER FUNCTIONS ### //
// Worker function used by DataHandler::FileAuthenticator to check file existence
// ! If no file exists, one is created empty
bool fileExists(const char* fileName){

	if(std::filesystem::exists(fileName)){
		std::cout << "File " << fileName << " exists" << std::endl;
		return true;
	}

	std::ofstream createFile (fileName);
	std::cout << "program file created on system '" << fileName << "'" << std::endl;
	createFile.close();
	return false;

};

int DataHandler::FileAuthenticator(){

	fileExists("yet.todo");
	fileExists("done.todo");

	return 0;
}
