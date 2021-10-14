//============================================================================
// Name        : Just TODO it
// Author      : vader::joker
// Version     : 0.0.1
// Description : todo list CLI in C++
// inotifywait -m -e CLOSE_WRITE --format="Debug/todo" Debug/ | sh
//
//============================================================================

#include <iostream>
#include "FileManager.h"

FileManager FileManager;

int main(int argc, char* argv[]) {

	FileManager.CreateDirectory("testingThings");
	FileManager.CreateDirectory("testingThings");

	return 0;
}
