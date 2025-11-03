#include "DataInstanceHandler.h"

DataInstanceHandler::DataInstanceHandler()
{
    first = nullptr;
    last = nullptr;
    readFromMemory();
}

DataInstanceHandler::~DataInstanceHandler()
{
    writeToMemory();
    DataInstance *current = first;
    while (current != nullptr)
    {
        DataInstance *next = current->next;
        delete current;
        current = next;
    }
}

DataInstance *DataInstanceHandler::findByName(string name)
{
    DataInstance *current = first;
    while (current != last)
    {
        if (current->getTitle() == name)
        {
            return current;
        }
        else
        {
            current = current->next;
        }
    }
    return nullptr;
}

DataInstance *DataInstanceHandler::findByISBN(string isbn)
{
    DataInstance *current = first;
    while (current != last)
    {
        if (current->getIsbn() == isbn)
        {
            return current;
        }
        else
        {
            current = current->next;
        }
    }
    return nullptr;
}

vector<DataInstance *> DataInstanceHandler::findByAuthor(string Author)
{
    vector<DataInstance *> Instances;
    DataInstance *current = first;
    while (current != last)
    {
        if (current->getAuthor() == Author)
        {
            Instances.push_back(current);
        }
        current = current->next;
    }
    return Instances;
}

vector<DataInstance *> DataInstanceHandler::findByPublisher(string Publisher)
{
    vector<DataInstance *> Instances;
    DataInstance *current = first;
    while (current != last)
    {
        if (current->getPublisher() == Publisher)
        {
            Instances.push_back(current);
        }
        current = current->next;
    }
    return Instances;
}

bool DataInstanceHandler::sortList(string sortby)
{
    if (sortby == "title")
    {
        while (true)
        {
            bool swapped = false;
            DataInstance *current = first;
            while (current->next != nullptr)
            {
                if (current->getTitle() > current->next->getTitle())
                {
                    // Swap the data between current and current->next
                    std::swap(*current, *(current->next));
                    swapped = true;
                }
                current = current->next;
            }
            if (!swapped)
            {
                return true; // List is sorted
            }
        }
    }
    else if (sortby == "author")
    {
        while (true)
        {
            bool swapped = false;
            DataInstance *current = first;
            while (current->next != nullptr)
            {
                if (current->getAuthor() > current->next->getAuthor())
                {
                    // Swap the data between current and current->next
                    std::swap(*current, *(current->next));
                    swapped = true;
                }
                current = current->next;
            }
            if (!swapped)
            {
                return true; // List is sorted
            }
        }
    }
    else if (sortby == "publisher")
    {
    }
    else if (sortby == "isbn")
    {
    }
    else if (sortby == "year")
    {
    }
    else
    {
        return false;
    }
    return true;
}

bool DataInstanceHandler::createDataInstance(string &title, string &author, string &publisher, string &isbn, int year)
{
    if (findByName(title) != nullptr || findByISBN(isbn) != nullptr)
    {
        std::cout << "A book with the same title or ISBN already exists." << std::endl;
        return false;
    }
    try
    {
        DataInstance *newBook = new DataInstance(title, author, publisher, isbn, year);
        last->next = newBook;
        newBook->previous = last;
        last = newBook;
    }
    catch (const std::bad_alloc &)
    {
        return false;
    }
    return true;
}

bool DataInstanceHandler::deleteDataInstance(string title, string isbn)
{
    DataInstance *current = first;
    while (current != nullptr)
    {
        if ((title != "" && current->getTitle() == title) ||
            (isbn != "" && current->getIsbn() == isbn))
        {
            try
            {
                delete current;
                return true;
            }
            catch (...)
            {
                return false;
            }
        }
        else
        {
            current = current->next;
        }
    }
    return false;
}

bool DataInstanceHandler::printAllDataInstances()
{
    DataInstance *current = first;
    if (current == nullptr)
    {
        std::cout << "No books available." << std::endl;
        return false;
    }
    while (current != nullptr)
    {
        printDataInstance(current);
        current = current->next;
    }
    return true;
}

bool DataInstanceHandler::printDataInstance(DataInstance *instance)
{
    if (instance == nullptr)
    {
        return false;
    }
    std::cout << "Title: " << instance->getTitle() << std::endl;
    std::cout << "Author: " << instance->getAuthor() << std::endl;
    std::cout << "Publisher: " << instance->getPublisher() << std::endl;
    std::cout << "ISBN: " << instance->getIsbn() << std::endl;
    std::cout << "Publication Year: " << instance->getYear() << std::endl;
    std::cout << "------------------------" << std::endl;
    return true;
}
