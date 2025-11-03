#include "DataInstance.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DataInstanceHandler
{
private:
public:
    DataInstance *first = nullptr;
    DataInstance *last = nullptr;

    DataInstanceHandler();
    ~DataInstanceHandler();
    DataInstance *findByName(string Name);
    DataInstance *findByISBN(string isbn);
    vector<DataInstance *> findByAuthor(string Author);
    vector<DataInstance *> findByPublisher(string Publisher);
    bool sortList(string sortby);
    bool readFromMemory();
    bool writeToMemory();
    bool addDataInstance(DataInstance *newBook);
    bool createDataInstance(
        string &title,
        string &author,
        string &publisher,
        string &isbn,
        int year);
    bool deleteDataInstance(string title = "", string isbn = "");
    bool printAllDataInstances();
    bool printDataInstance(DataInstance *instance);
};