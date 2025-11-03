#include <iostream>
#include <string>
#include "DataInstanceHandler.cpp";

using namespace std;

int main()
{
    menuloop();
    return 0;
}

void menuloop()
{
    DataInstanceHandler *handler = new DataInstanceHandler();
    cout << "Welcome to the Book Database!" << endl;
    while (true)
    {
        system("CLS");
        cout << "Please choose an option:" << endl;
        cout << "1. Add a new book" << endl;
        cout << "2. Delete a book" << endl;
        cout << "3. Find a book by title" << endl;
        cout << "4. Find a book by ISBN" << endl;
        cout << "5. Find books by author" << endl;
        cout << "6. Find books by publisher" << endl;
        cout << "7. Print all books" << endl;
        cout << "8. Exit" << endl;

        int choice;
        string title = "", author = "", publisher = "", isbn = "";
        int year = 0;
        vector<DataInstance *> books;
        DataInstance *current;
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("CLS");
            cout << "Enter book title: ";
            cin >> title;
            cout << "Enter book author: ";
            cin >> author;
            cout << "Enter book publisher: ";
            cin >> publisher;
            cout << "Enter book ISBN: ";
            cin >> isbn;
            cout << "Enter book publication year: ";
            cin >> year;
            handler->createDataInstance(title, author, publisher, isbn, year);
        case 2:
            system("CLS");

            cout << "Enter book title to delete (or leave blank): ";
            cin >> title;
            cout << "Enter book ISBN to delete (or leave blank): ";
            cin >> isbn;
            if (title.empty() && isbn.empty())
            {
                cout << "You must provide either a title or an ISBN to delete a book." << endl;
                break;
            }
            handler->deleteDataInstance(title, isbn);
            break;
        case 3:
            system("CLS");
            cout << "Enter book title: ";
            cin >> title;
            handler->findByName(title);
            break;
        case 4:
            system("CLS");
            cout << "Enter book ISBN: ";
            cin >> isbn;
            handler->findByISBN(isbn);
            break;
        case 5:
            system("CLS");
            cout << "Enter book author: ";
            cin >> author;
            books = handler->findByAuthor(author);
            for (DataInstance *book : books)
            {
                handler->printDataInstance(book);
            }
            break;
        case 6:
            system("CLS");
            cout << "Enter book publisher: ";
            cin >> publisher;
            books = handler->findByPublisher(publisher);
            for (DataInstance *book : books)
            {
                handler->printDataInstance(book);
            }
            break;
        case 7:
            system("CLS");
            handler->sortList("title");
            current = handler->first;
            while (current != nullptr)
            {
                for (int i = 0; i < 10; i++)
                {
                    handler->printDataInstance(current);
                    current = current->next;
                }
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            }
            break;
        case 8:
            cout << "Exiting the program. Goodbye!" << endl;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}