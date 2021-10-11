

class DataHandler {

public:

	// function that checks file existance ( list.todo )
		// * if no
			// - create file / fill with any needed instructions or info
		// * if yes
			// return true

	bool FileAuthenticator(const char*);

	// ------------------------------------------------

	// function that parses list.todo to display it with proper spacing / alignment in terminal ( default option )
	// by default, on startup of app, parser will clean the file, incase of out of app edits. ie, delete spaces / empty lines
	// function that checks off todo list items
	// function that clears checked off items
	// function that archives checked off items with date / timestamp in file
	// function that clears archive file and todo list file

	void DataHandler();

	// ------------------------------------------------

	// function that lists todo list items
			// # NOTE: reads and std::cout each line
			// # NOTE: file / text formatting handled by another "parsing" function
	// function that takes commands for date ranges to show archived todo items ( date range / specific / or all archives )

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
