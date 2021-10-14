#include "FileManager.h"

FileManager FileHandler;

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

	std::ofstream createFile (file);
	createFile.close();
	std::cout << "file " << file << " created @" << std::endl;

};

// Can delete files and directories
void FileManager::DeleteFile(const char* name){

	std::filesystem::remove_all(name);

};


void FileManager::CreateDirectory(const char* dir){

		std::filesystem::create_directories(dir);
		std::cout << "Directory created @ " << dir << std::endl;
};

//


// Initializes todo project tracking files in .todo hidden folder
void FileManager::Init(){

	const char* confirmation = "no";

	if(FileHandler.FileAuthenticator("./.todo")){\

		std::cout << "Project already exists, would you like to delete and re-initialize? [ y / n ]" << std::endl;
		std::cin >> confirmation;

		if(confirmation == "n" || confirmation == "no"){break;};
	};

	// global todo list in /global/index.todo
	.todo
		archive
			|-| blah blah blah
			|\| ./.todo/lists C3P0r2D2
		global
		src

	// lists.todo
	C3P0r2D2 src

	// src/list.todo


	FileHandler.FileAuthenticator(name);
	FileHandler.CreateFile(file);
	FileHandler.CreateDirectory(dir);
	FileHandler.DeleteFile(name);

	const char* dir



};
