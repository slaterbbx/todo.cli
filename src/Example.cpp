#include <iostream>

// |#| ParseTest.cpp
// |-| this is a file scoped todo list item on ParseTest.cpp
// |x| this is a completed file scoped todo list item on ParseTest.cpp

// |#| ParseTest()
// |-| this is a function / group scoped todo list item on ParseTest.cpp "grouping" ...
// |x| this is a completed group scoped todo list item on ParseTest() function scope "grouping"

// The above in CMD would look similar to the following
//
//  * ParseTest.cpp
//  1. |-| this is a file scoped todo list item on ParseTest.cpp
//  2. |x| this is a completed file scoped todo list item on ParseTest.cpp
// 		* ParseTest()
// 		1. |-| this is a function / group scoped todo list item on -
//			ParseTest.cpp "grouping" ( cont... )
// 		2. |x| this is a completed group scoped todo list item on -
//			ParseTest() function scope "grouping"

// NOTE: you can put |#| ParseTest anywhere in the page, as long as it comes after the global file scope |#| ParseTest.cpp -
// that is named exactly the same as the file
// NOTE: furthermore, all of your todo list items can be anywhere in the document except the global file scope

void ParseTest(){

	// |-| add more functionality here
	// NOTE: this will fall under any directly above |#| "grouping" designator
	std::cout << "This is a test file to show / test parsing of the todo CLI app" << std::endl;

};

// Just TODO It Syntax
// |#| todo list item group
// |-| todo list item ( incomplete )
// |x| todo list item ( complete ) / can be "purged" from the file using CMD -p or --purge
// | | use a dash at the end of a line if you prefer not to use word wrap like so -
// and then you can keep your files pretty, even after a period like so. -
// for example.

// Just TODO It Highlights
// "Highlights" are used to stand out in the GUI and CLI display of lists
// FEATURE
// FIX
// ERROR
// CONSIDERATION
// CUSTOM ( Using all caps, example: below )
// |x| FIREBASE | setup connection to firebase, edit users id based on api changes
//
// Task identifiers
// 3d4A | four digits
// Task identifiers look like the following when used in a file on a task
// |-| 3d4A | this is an example todo list item in my file

// The goal of task identifiers is to be synced up with the live backend service, this allows -
// teams / team members to take on the role of handling a task by assiging a task id from their -
// account, team leaders can also use this to assign tasks to team members / show investors instant response
// ---- Task identifiers will also work in static mode, ie. local file system with git only if "non tech savy -
// team members / investors" are not apart of the equation on your project
// ---- in static mode, user uses CLI to generate an ID for themselves, puts it in the file -
// uploads to git and other users can run a command to see the name of the person who has -
// taken on the role of handling that todo list item, this info will be kept in a .tskids file in the project

// A "Fully loaded" todo list item might look like the following
// |x| 3d4A | FIREBASE | setup connection to firebase, edit users id based on api changes

// Add option to use native IDE todo "tagging", would look like so
// todo |x| 3d4A | FIREBASE | setup connection to firebase, edit users id based on api changes
// todo |x| 8j5a | RECALL | create a recall function
// todo |x| 2s4J | FIREBASE | add testing to check firebase connection
