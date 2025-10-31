#### Core Features

1. **Data Structure:**

   - Each book record consists of these fields:
     - `BookID` (integer, unique)
     - `Title` (string, max length 100 characters)
     - `Author` (string, max length 50 characters)
     - `YearPublished` (integer)

2. **Persistent Storage:**

   - Use a binary file to store all book records.
   - On program startup, load existing records from the file into memory.
   - On any modification (add, update, delete), update the file immediately to avoid data loss.
   - Save the entire collection back to the file properly on program exit.

3. **CRUD Operations:**
   - **Add:**
     - Add a new book record ensuring the `BookID` is unique; reject duplicates.
   - **Search:**
     - Search books by `BookID` efficiently in memory.
     - Display full details of the book if found, otherwise indicate not found.
   - **Update:**
     - Update the title, author, and/or year of an existing book by `BookID`.
   - **Delete:**
     - Remove a book record by `BookID` from memory and file permanently.

#### Hard Requirements

4. **Dynamic Memory Management:**

   - Store the book records in dynamically allocated structures like arrays or linked lists that can grow or shrink as needed.
   - Properly handle memory allocation and deallocation to avoid leaks.

5. **Data Integrity & Error Handling:**

   - Validate input data for correct types and reasonable constraints (e.g., year published cannot be in the future).
   - Gracefully handle file-related errors such as missing or corrupted files.
   - Ensure no partial updates occur that could corrupt the database.

6. **User Interface:**

   - Implement a text-based menu interface for users to choose operations (add, search, update, delete, exit).
   - Provide clear user prompts, error messages, and operation confirmations.

7. **Extra Credit Features (Optional):**
   - Sort the book records by `BookID` or `Title` in memory and display them.
   - Implement an indexing structure (such as a map or hash table) to speed up searches by `BookID`.
   - Add file-locking or concurrency control so multiple program instances can operate safely on the file without corrupting data.

This assignment focuses on fundamental C++ concepts like classes, dynamic memory, file I/O, error handling, and user interaction while modeling a real-world book database scenario. Let me know if you want example data structures or starter code to get going.
