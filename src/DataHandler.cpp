#include <iostream>
#include <fstream>
#include <filesystem>
#include "DataHandler.h"

bool DataHandler::FileAuthenticator(const char* fileName){

	if(std::filesystem::exists(fileName)){
			std::cout << "File " << fileName << " exists" << std::endl;
			return true;
	};
	return false;
};

void DataHandler::CreateFile(const char* fileName){
	std::cout << "program file created on system '" << fileName << "'" << std::endl;
	std::ofstream createFile (fileName);
	createFile.close();
};
