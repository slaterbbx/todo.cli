#include "FileManager.h"
#include <iostream>
#include <fstream>

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
int FileManager::CreateFile(const char* file){

	if(FileHandler.FileAuthenticator(file)){
		std::cout << "Error: file " << file << " already exists" << std::endl;
		return 1;
	};

	std::ofstream createFile (file);
	createFile.close();
	std::cout << "file " << file << " created @" << std::endl;
	return 0;
};

// Can delete files and directories
void FileManager::Delete(const char* name){

	std::filesystem::remove_all(name);
};


int FileManager::CreateDirectory(const char* dir){

	if(FileHandler.FileAuthenticator(dir)){
		std::cout << "Error: dir " << dir << " already exists" << std::endl;
		return 1;
	};

	std::filesystem::create_directories(dir);
	std::cout << "Directory created @ " << dir << std::endl;
	return 0;
};

int FileManager::ReadFile(const char* fileName){

	  std::streampos size;
	  char* memblock;

	  std::ifstream file (fileName, std::ios::in|std::ios::binary|std::ios::ate);

	  if (file.is_open()){

	    size = file.tellg();
	    memblock = new char [size];
	    file.seekg (0, std::ios::beg);
	    file.read (memblock, size);
	    file.close();

	    std::cout << "the entire file content is in memory";

	    delete[] memblock;
	    return 0;

	  }

	  std::cout << "Unable to open file" << std::endl;
	  return 1;
};


// Initializes todo project tracking files in .todo hidden folder
int FileManager::Init(){

	std::string confirmation = "no";

	if(FileHandler.FileAuthenticator("./.todo")){

		std::cout << "Project already exists, would you like to delete and re-initialize? [ y / n ]" << std::endl;
		std::cin >> confirmation;

		if(confirmation == "n" || confirmation == "no"){return false;};
	};

	//	/.todo
	//		lists.todo
	//		src
	//			lists.todo
	//		archive
	//			lists.todo
	//		global
	//			index.todo
	//			/attachments

	std::string buildFile = "build.txt";

	std::string folderStructure[5] = {"/todo/", "/todo/src/", "/todo/archive/", "/todo/global/", "/todo/global/attachments/"};
	std::string files[4] = {"/todo/lists.todo", "/todo/src/lists.todo", "/todo/archive/lists.todo", "/todo/global/index.todo"};

	int arrLength = sizeof(folderStructure)/sizeof(folderStructure[0]);

	std::cout << arrLength << std::endl;


//	for(i = 0; i <= arrLength; i++){
//
//	}


	std::cout << "If you typed Yes or y you should see this message" << std::endl;
//	FileHandler.FileAuthenticator(name);
//	FileHandler.CreateFile(file);
//	FileHandler.CreateDirectory(dir);
//	FileHandler.Delete(name);

//	const char* dir;


	return true;
};
