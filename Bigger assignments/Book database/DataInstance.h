#include <string>
#include <iostream>
using namespace std;

class DataInstance
{
private:
    string title;
    string author;
    string publisher;
    string isbn;
    int year;

public:
    DataInstance *next = nullptr;
    DataInstance *previous = nullptr;
    DataInstance(
        string &title,
        string &author,
        string &publisher,
        string &isbn,
        int year,
        DataInstance *previous = nullptr,
        DataInstance *next = nullptr);
    ~DataInstance();
    string getTitle() const;
    string getAuthor() const;
    string getPublisher() const;
    string getIsbn() const;
    int getYear() const;
    string setTitle(const string &newTitle);
    string setAuthor(const string &newAuthor);
    string setPublisher(const string &newPublisher);
    string setIsbn(const string &newIsbn);
    int setYear(const int &newYear);
};