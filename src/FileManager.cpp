#include "FileManager.h"

FileManager Data;

// Checks if files exist
bool FileManager::FileAuthenticator(const char* name){

	if(std::filesystem::exists(name)){
			std::cout << "File " << name << " exists !" << std::endl;
			return true;
	};
	return false;
};


// Creates files only
void FileManager::CreateFile(const char* file){

	if(Data.FileAuthenticator(file)){
		std::cout << "program file created on system '" << file << "'" << std::endl;
		std::ofstream createFile (file);
		createFile.close();

	};
};


void FileManager::CreateDirectory(const char* dir){

	if(!Data.FileAuthenticator(dir)){
		std::filesystem::create_directories(dir);
		std::cout << "Directory created @ " << dir << std::endl;
	};
};


// Initializes todo project tracking files in .todo hidden folder
void FileManager::Init(){

	// Later auto put this into the .config file and allow an option to set / change default
	const char* dir = ".todo";
	std::string confirmation = "";

	if(Data.FileAuthenticator(dir)){

		std::cout << "It seems there is already a project initialized, do you want to delete your todo project and start fresh?" << std::endl;
		std::cin >> confirmation;

		if(confirmation == "y" || confirmation == "yes"){
			// removed entire .todo directory and create a new project.
			std::cout << "Did this work?" << std::endl;
		}else {
			std::cout << "ok, your project is still existing in time and space" << std::endl;
		};

	} else if(!Data.FileAuthenticator(dir)){
		std::cout << "Creating your project now" << std::endl;
	};

};
