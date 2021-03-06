#include <iostream>
#include <fstream>
#include <filesystem>

class FileManager {
	
	// NOTE: we need to check filetype .cpp etc to know the comment // tags to ignore when seeking our custom # markdown ie. | | or |x| etc... used after the filetype comment markdown, this reduces our markdown required ie. less typing
	// BONUS THOUGHT: use # hashtag to innitiate a todo item instead of | | because its easier to type for the user. This only works if it is after a |#|Group designator, "Group designators" are used to set markdown locations to attach todo items to. Filenames are automatically attached to Group designators for "scoping" purposes and tree building.

public:

	// method that uses git functionality as needed for a streamline git experience
	// focus on creating a method to use a git branch to store the .todo folder in for -
	// disconnected pushes to github, this allows us to update the hidden .git folder files automagically -
	// so that you can simply run $git push origin todo , and all team members can pull that -
	// branch to update the projects "todo lists"
	void GitConnect();

	// |x| function that lists todo list items
			// # NOTE: reads and std::cout each line
			// # NOTE: file / text formatting handled by another "parsing" function
	// |-| function that takes commands for date ranges to show archived todo items ( date range / specific / or all archives )

	void ListItems(); // ( -ls ) or ( -ls [1] ) "[] means optional"
	
	// method that adds todo list items
	// needs to search files for markdown that matchs "markdown.tag" option
	// all files are parsed to find markdown.tag location similar to html "#" selector
	void AddItem(); // $todo add [markdown.tag] 'new thing todo'
	
	// method that removes todo list items
	void RemoveItem();
	
	// method that handles moving ( cmd: 'mv' ) todo list items up / down
	void MoveItem();

	// Can open a very specific line of a file ( line # and file location kept in lists.todo )
	void Edit();

	// - add option to watch git and purge files when they are added to git
	// NOTE: "purge" means to remove all |x| completed tasks from a file or all project or specific list
	
	void Purge();

	// Used to attach one "list" "grouping" to another or a List item to another group or item
	void Attach();
	
	// used to expand out one layer as a list or an item
	void Eject();


	// ----------------------------------------------------------------------------------
	// method that checks file existence ( list.todo )
	bool FileAuthenticator(const char*);
	
	// methods that create files and directory
	int CreateFile(const char*);
	
	// need more thought
	int CreateDirectory(const char*);
	void Delete(const char*);
	int ReadFile(const char*);
	int WriteFile(const char*);

	int Init();

private:
	// we will need to change this later to make it project relative automatically using our .config file in .todo
	std::string rootFolder = ".todo";

};

// ------------------------------------------------

// |#| FileManager.h // because this "group" title matches file name, this will be a global wrapper -
// around the entire files todo list. ( auto puts all other # markers as sub categories )
// |-| global to the FileManager.h file
// |#| FileManager() // displays as "group" title for todo items
// |-| specific to the FileManager() class method of FileManager.h file and will be organized -
// accordingly when displayed in terminal with all following tasks / todos as sub items. -
// this will happen until the next occurrence of |#|

// ## THE FOLLOWING WILL BE USED TO TEST THE TODO FILE WATCHING

// |-| function that parses lists.todo to handle project todo files ( list of folder / file, addresses )
// |-| by default, on startup of app, parser will clean the file, incase of out of app edits. ie, delete spaces / empty lines
// |-| function that checks off todo list items
// |x| 1A4L | function that clears checked off items ( Kyle Gallagher | Front end design | 8/29/2021 ) -
// continue the last line
// |-| function that archives checked off items with date / timestamp in file
// |-| function that clears archive file and todo list file ( global )

	// NOTE: after a certain amount of time or quantity, divide "archive lists" into sep files in folder /archives/ ( global )
	// |-| add command to purge archives based on date ranges
	// |-| add command to allow users to turn on or off archiving ( on with 1 month limit by default )

// |-| FEATURE add feature to handle projects ( programming / files ) with todo markdown in them ( using comment systems )
// |-| FEATURE auto divides grouped lists into folders / files
// |-| IMPORTANT uses git services like github to manage lists that GUI versions also can sync to

// ------------------------------------------------

// ### SOME THOUGHTS FOR GUI VERSION ### ///
//
//           CONSIDERATIONS / *
//
// #################################### ///

// sync local data to database, use local first for offline mode, then sync
// CLI and GUI version use same data.files