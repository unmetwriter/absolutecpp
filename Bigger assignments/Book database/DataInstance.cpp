#include <string>
#include <iostream>
#include "DataInstance.h"
using namespace std;

DataInstance::DataInstance(
    string &title,
    string &author,
    string &publisher,
    string &isbn,
    int year,
    DataInstance *previous = nullptr,
    DataInstance *next = nullptr)
    : title(title),
      author(author),
      year(year),
      publisher(publisher),
      isbn(isbn),
      previous(previous),
      next(next) {}

DataInstance::~DataInstance()
{
    previous->next = next;
    next->previous = previous;
}

string DataInstance::getTitle() const { return title; }

string DataInstance::getAuthor() const { return author; }

string DataInstance::getPublisher() const { return publisher; }

string DataInstance::getIsbn() const { return isbn; }

int DataInstance::getYear() const { return year; }

string DataInstance::setTitle(const string &newTitle)
{
    title = newTitle;
    return title;
};

string DataInstance::setAuthor(const string &newAuthor)
{
    author = newAuthor;
    return author;
};

string DataInstance::setPublisher(const string &newPublisher)
{
    publisher = newPublisher;
    return publisher;
};

string DataInstance::setIsbn(const string &newIsbn)
{
    isbn = newIsbn;
    return isbn;
};

int DataInstance::setYear(const int &newYear)
{
    year = newYear;
    return year;
};
