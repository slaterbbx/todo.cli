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


// Creates files only
void DataHandler::CreateFile(const char* fileName, int fileCheckOveride){
	// param "fileCheckOveride" is used to allow writing over files
	std::string confirmation = "";

	// If we activate "fileOveride" then we just create the file even if it exists already
	if(Data.FileAuthenticator(fileName) && fileCheckOveride == 1){
		std::cout << "program file created on system '" << fileName << "'" << std::endl;
		std::ofstream createFile (fileName);
		createFile.close();

	// else, if the file overRide is not set to yes, we first ask the user to confirm writing over the old file
	} else if(fileCheckOveride == 0){
		std::cout << "todo file " << fileName << " already exists, do you want to replace this file?" << std::endl;
		std::cin >> confirmation;

		// if we say yes to overRide, we change confirmation to yes and execute file replacement
		if (confirmation == "y" || confirmation == "yes"){
			std::cout << "program file created on system '" << fileName << "'" << std::endl;
			std::ofstream createFile (fileName);
			createFile.close();
		};
	};
};

// Creates directory's only
void DataHandler::CreateDirectory(const char* directoryName, int directoryCheckOveride){
	// param "fileCheckOveride" is used to allow writing over folders
	std::string confirmation = "";

	// If we activate "fileOveride" then we just create the directory even if it exists already
	if(Data.FileAuthenticator(directoryName) && directoryCheckOveride == 1){
		std::filesystem::create_directories(directoryName);
		std::cout << "Directory created @ " << directoryName << std::endl;

	// else, if the file overRide is not set to yes, we first ask the user to confirm writing over the old file
	} else if(directoryCheckOveride == 0){
		std::cout << "todo file " << directoryName << " already exists, do you want to replace this file?" << std::endl;
		std::cin >> confirmation;

		// if we say yes to overRide, we change confirmation to yes and execute file replacement
		if (confirmation == "y" || confirmation == "yes"){
			std::filesystem::create_directories(directoryName);
			std::cout << "Directory created @ " << directoryName << std::endl;
		};
	};
};


// Checks if files exists, creates them if not, deletes files also
void DataHandler::FileManager(int opt, const char* fileName){

	// Handle creating / deleting / moving files and folders

//				Data.CreateFile(fileName, 0);

};


// Initializes todo project tracking files in .todo hidden folder
void DataHandler::Init(){

	// Later auto put this into the .config file and allow an option to set / change default
	const char* directoryName = ".todo";
	std::string confirmation = "";

	if(Data.FileAuthenticator(directoryName)){

		std::cout << "It seems there is already a project initialized, do you want to delete your todo project and start fresh?" << std::endl;
		std::cin >> confirmation;

		if(confirmation == "y" || confirmation == "yes"){
			// removed entire .todo directory and create a new project.
			std::cout << "Did this work?" << std::endl;
		}else {
			std::cout << "ok, your project is still existing in time and space" << std::endl;
		};

	} else if(!Data.FileAuthenticator(directoryName)){
		std::cout << "Creating your project now" << std::endl;
	};

	std::cout << "---------- Method: DATAHANDLER::TODOINIT" << std::endl;

	// Do a check for the entire validity of the default files

	// Check if .todo hidden folder exists in project

	// Create default folders and files
	if(Data.FileAuthenticator(".todo/lists.todo")){
		std::cout << "Folder ./todo exists in the project Root folder" << std::endl;
	}else {
		std::cout << "Folder does not exist" << std::endl;
		Data.FileManager(1, ".todo/list.todo");
	};

};
