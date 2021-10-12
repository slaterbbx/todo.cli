#include <iostream>
#include <fstream>
#include <filesystem>
#include "DataHandler.h"

DataHandler Datas;

// Checks if files exist
bool DataHandler::FileAuthenticator(const char* fileName){

	if(std::filesystem::exists(fileName)){
			std::cout << "File " << fileName << " exists" << std::endl;
			return true;
	};
	return false;
};


// Creates files only, does not check if they exists
void DataHandler::CreateFile(const char* fileName){
	std::cout << "program file created on system '" << fileName << "'" << std::endl;
	std::ofstream createFile (fileName);
	createFile.close();
};

// Checks if files exists, creates then if not, deletes files also
void DataHandler::FileManager(int opt, const char* fileName){

	// opt or option 1 ( create file )
	if(opt == 1){
		if(Datas.FileAuthenticator(fileName)){
			std::cout << "File " << fileName << " already exists" << std::endl;
		}else {
				Datas.CreateFile(fileName);
		};
	}else if(opt == 0){
		// opt or option 0 ( delete file )

	}
};

// Initializes todo project tracking files in .todo hidden folder
void DataHandler::TodoInit(){

	// Do a check for the entire validity of the default files, headers etc

	// Check if .todo hidden folder exists in terminal location
	// Create default folders and files

};
