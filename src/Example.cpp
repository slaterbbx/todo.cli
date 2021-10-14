#include <iostream>

// |#| Example.cpp, if this is not here, it is added to the list by default ( you can use custom naming )
// |-| this is a file scoped todo list item on Example.cpp
// |x| this is a completed file scoped todo list item on Example.cpp

// |#| ParseTest()
// |-| this is a function / group scoped todo list item on Example.cpp "grouping" ...
// |x| this is a completed group scoped todo list item on ParseTest() function scope "grouping"
// | | NOTE: you can add todo list items to your files via command line by attaching to the filename then -
// to the "grouping" designator, in this case that would be the keyword "ParseTest()"
// ### EXAMPLE TERMINAL ENTRY
// $todo add Example.cpp ParseTest() "| | EXAMPLE CMD: this is at test todo list item added via CMD"

// The above in TERMINAL would look similar to the following
//
//  * Example.cpp
//  1. |-| this is a file scoped todo list item on Example.cpp
//  2. |x| this is a completed file scoped todo list item on Example.cpp
// 		* ParseTest()
// 		1. |-| this is a function / group scoped todo list item on -
//			ParseTest.cpp "grouping" ( cont... )
// 		2. |x| this is a completed group scoped todo list item on -
//			ParseTest() function scope "grouping"
//		@. | | NOTE: you can add todo list items to your files via -
//			command line by attaching to the filename then -
//			to the "grouping" designator, in this case that would -
//			be the keyword "ParseTest()"
//		@. | | EXAMPLE: this is at test todo list item added via CMD

// NOTE: you can put |#| ParseTest() anywhere in the page, as long as it comes after the global file scope |#| ParseTest.cpp -
// that is named exactly the same as the file, if you don't put a "global" scope, it will use the file name as default


// - |#| do not need to be closed and only one is needed per "list" as the list title, put all list items below -
// this designator in the code, if another # ID is encountered then, all following lists items will fall into -
// that trailing designator in the todo list, you can reorganize the order that lists show up in the CLI

// ATTACHMENTS: |#%| open and close |%| these are attachments and can be attached to # ID designators for "groups" aka "lists" in todo
// NOTE: if the name is the same as a #id then it will automatically be attached |#%| ParseTest() will be attached to |#| ParseTest() -
// you should note! that you can name these #ids anything you want and they do not need to match with your code at all!
// |#%| ParseTest()

void ParseTest(){

	// |#%| Cout is placeholder for attached doc
	// note: you can attach docs or files to your lists via CLI
	std::cout << "This is a test file to show / test parsing of the todo CLI app" << std::endl; // |%|

};

// |%|

// ### Just TODO It Syntax
// |#| todo list item group
// |-| todo list item ( incomplete )
// |x| todo list item ( complete ) / can be "purged" from the file using CMD -p or --purge
// |*| marker to not purge from list "leave as star"
// | | use a dash at the end of a line if you prefer not to use word wrap like so -
// and then you can keep your files pretty, even after a period like so. -
// for example.
// | | the empty box < can be used for custom spacers in your lists for example

// ### Just TODO It "Highlights"
// "Highlights" are used to stand out in the GUI and CLI display of lists
// FEATURE
// FIX
// ERROR
// CONSIDERATION
// CUSTOM ( Using all caps, example: below )
// |x| FIREBASE | setup connection to firebase, edit users id based on api changes
//
// ### Task identifiers
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

// ### A "Fully loaded" todo list item might look like the following
// |x| 3d4A | FIREBASE | setup connection to firebase, edit users id based on api changes

// ### CONFIG OPTIONS
// Add .config option to use native IDE todo "tagging", would look like so ( optional )
// todo |x| 3d4A | FIREBASE | setup connection to firebase, edit users id based on api changes
// todo |x| 8j5a | RECALL | create a recall function
// todo |x| 2s4J | FIREBASE | add testing to check firebase connection
// Add .config option to set before or after |x| boxes.
// |x| todo | 3d4A | FIREBASE | setup connection to firebase, edit users id based on api changes
// |x| todo | 8j5a | RECALL | create a recall function
// |x| todo | 2s4J | FIREBASE | add testing to check firebase connection
// Add .config option to sync to database services for desktop and mobile app integration / team toolset
