#include "DataHandler.h"

DataHandler Data;

// Checks if files exist
bool DataHandler::FileAuthenticator(const char* fileName){

	if(std::filesystem::exists(fileName)){
			std::cout << "File " << fileName << " exists !" << std::endl;
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

// Checks if files exists, creates them if not, deletes files also
void DataHandler::FileManager(int opt, const char* fileName){

	// opt or option 1 ( create file )
	if(opt == 1){
		if(Data.FileAuthenticator(fileName)){
			std::cout << "File " << fileName << " already exists" << std::endl;
		}else {
				Data.CreateFile(fileName);
		};
	}else if(opt == 0){
		// opt or option 0 ( delete file )

	}
};

// Initializes todo project tracking files in .todo hidden folder
void DataHandler::Init(){

	// Later auto put this into the .config file and allow an option to set / change default
	const char* directoryName = ".todo";
	const char* confirmation = "";

	if(Data.FileAuthenticator(directoryName)){
		std::cout << "It seems there is already a project innitialized, do you want to delete your todo project and start fresh?" << std::endl;
		std::cin << confirmation;
		if(confirmation == "y" || confirmation == "yes"){
			// removed entire .todo directory and create a new project.
		};

	};

	std::cout << "---------- Method: DATAHANDLER::TODOINIT" << std::endl;

	// Do a check for the entire validity of the default files

	// Check if .todo hidden folder exists in terminal location

	 std::filesystem::create_directories(directoryName);

	// Create default folders and files
	if(Data.FileAuthenticator(".todo/lists.todo")){
		std::cout << "Folder ./todo exists in the project Root folder" << std::endl;
	}else {
		std::cout << "Folder does not exist" << std::endl;
		Data.FileManager(1, ".todo/list.todo");
	};

};
