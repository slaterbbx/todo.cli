

class DataHandler {

public:

	// this function will handle initializing a git project, commiting / pushing and pulling
	// -- this is used for local system todo lists, regular git is for project TODO lists
	// should use GIT CLI and GITHUB CLI together to log in and manage git project easily
	void GitConnect();

	// ------------------------------------------------

	// function that checks file existance ( list.todo )
		// * if no
			// - return false
		// * if yes
			// return true

	bool FileAuthenticator(const char*); // COMPLETED FUNCTIONALITY

	void CreateFile(const char*); // SELF EXPLANITORY

	// ------------------------------------------------

	// |#| DataHandler.h // because this "group" title matches file name, this will be a global wrapper -
	// around the entire files todo list. ( auto puts all other # markers as sub categories )
	// |-| global to the DataHandler.h file
	// |#| FileManager() // displays as "group" title for todo items
	// |-| specific to the FileManager() class method of DataHandler.h file and will be organized -
	// accordingly when displayed in terminal with all following tasks / todos as sub items. -
	// this will happen until the next occurrence of |#|

	// ## THE FOLLOWING WILL BE USED TO TEST THE TODO FILE WATCHING

	// |-| function that parses lists.todo to handle project todo files ( list of folder / file, addresses )
	// |-| by default, on startup of app, parser will clean the file, incase of out of app edits. ie, delete spaces / empty lines
	// |-| function that checks off todo list items
	// |x| 1A4L | function that clears checked off items ( Kyle Gallagher | Front end design | 8/29/2021 ) -
	// continue the last line
	// |-| function that archives checked off items with date / timestamp in file
	// |-| function that clears archive file and todo list file

		// NOTE: after a certain amount of time or quantity, divide "archive lists" into sep files in folder /archives/
		// |-| add command to purge archives based on date ranges
		// |-| add command to allow users to turn on or off archiving ( on with 1 month limit by default )

	// |-| FEATURE add feature to handle projects ( programming / files ) with todo syntax in them ( using comment systems )
	// |-| FEATURE auto divides grouped lists into folders / files
	// |-| IMPORTANT uses git services like github to manage lists that GUI versions also can sync to

	// |#| FileManager().end

	// ### NEW LIST BASED ON FEATURE PLANS


	bool FileManager(); // NOTE: this will probably be broken out into many smaller methods or a subclass altogether

	// ------------------------------------------------

	// Init project for TODO that sets up initial folder structure and files for local todo list tracking
	// We are using files / folder so that our lists can be organized into a project and incorporated into git tracking -
	// we can use a "global" file set by default ( system ) / project by project basis when in a project folder
	// NOTE: set an "override" for the in project folder scoping so that you can switch between projects from anywhere -
	// FEATURE add option to omit TODO code from files when posting to git by passing git push through TODO app
	// -- Makes a copy of the project / deletes comments related to TODO pushs through todo to git the copy and deletes it

	void TodoInit();

	// ------------------------------------------------

	// |x| function that lists todo list items
			// # NOTE: reads and std::cout each line
			// # NOTE: file / text formatting handled by another "parsing" function
	// |-| function that takes commands for date ranges to show archived todo items ( date range / specific / or all archives )

	void ListItems(); // ( -ls ) or ( -ls [1] ) "[] means optional"

	// ------------------------------------------------

	// function that adds todo list items

	void AddItem();

	// ------------------------------------------------

	// function that removes todo list items

	void RemoveItem();

	// ------------------------------------------------

	// function that handles moving ( cmd: 'mv' ) todo list items up / down

	void MoveItem();

	// ------------------------------------------------

	// function that opens list.todo file in default text editor for editing ( -e --edit )
			// - additional commands might be (
		// OR edit an individual item by re-writing it ( todo -e 1 "then new string, todo item" )
			// - EXAMPLE ^ : todo -e 2 warm up a cup of coffee

	void Edit();

};

// ### SOME THOUGHTS FOR GUI VERSION ### ///
//
//           CONSIDERATIONS / *
//
// #################################### ///

// sync local data to database, use local first for offline mode, then sync
// CLI and GUI version use same data.files
