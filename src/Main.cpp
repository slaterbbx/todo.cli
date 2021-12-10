//============================================================================
// Name        : Just TODO it
// Author      : @vader.iam::joker::slaterbbx
// Version     : 0.0.1
// Description : todo list CLI in C++
// License : MIT
// inotifywait -m -e CLOSE_WRITE --format="Debug/todo" Debug/ | sh
//============================================================================

#include <iostream>
#include "FileManager.hpp"
FileManager FileManager;


int main(int argc, char* argv[]) {

	FileManager.Init();

	return 0;
}