#ifndef catalog_h
#define catalog_h
#include <string>
using namespace std;

class El {
public:
    string surname;
    string name;
    int readerID;
    El* next;
};

class Catalog {
public:
    El* catalog[];
    void add();
    bool find(int reader_id);
    int hashFunction(int n);
};


#endif /* catalog_h */
