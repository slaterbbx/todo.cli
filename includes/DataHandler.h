

class DataHandler {

public:

	// function that checks file existance ( list.todo )
		// * if no
			// - create file / fill with any needed instructions or info
		// * if yes
			// return 1 to signify true and 0 for false ( file existance )

	int FileAuthenticator();

	// ------------------------------------------------

	// function that parses list.todo to display it with proper spacing / alignment in terminal

	void FileParser();

	// ------------------------------------------------

	// function that lists todo list items
			// # NOTE: reads and std::cout each line
			// # NOTE: file / text formatting handled by another "parsing" function

	void FileReader();

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

	// function that opens list.todo file in default text editor for editing
		// OR edit an individual item by re-writing it ( -e --edit )
			// - EXAMPLE ^ : todo -e 2 warm up a cup of coffee

	void EditItems();

};
