#include <string>
#include <iostream>

class DataInstance
{
private:
    std::string title;
    std::string author;
    std::string publisher;
    std::string isbn;
    int year;
    DataInstance *next = nullptr;
    DataInstance *previous = nullptr;

public:
    DataInstance(
        std::string &title,
        std::string &author,
        int year,
        std::string &publisher,
        std::string &isbn,
        DataInstance *previous = nullptr,
        DataInstance *next = nullptr);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getPublisher() const;
    std::string getIsbn() const;
    int getYear() const;
    ;
    std::string setTitle(const std::string &newTitle);
    std::string setAuthor(const std::string &newAuthor);
    std::string setPublisher(const std::string &newPublisher);
    std::string setIsbn(const std::string &newIsbn);
    int setYear(const int &newYear);
};