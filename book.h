#ifndef Book_h
#define Book_h

#include <stdio.h>
#include <string>
using namespace std;

class Book {
    string author;
    string title;
    bool status;
public:
    string getAutor() {
        return author;
    }
    string getTitle() {
        return title;
    }
    void setStatus(bool s) {
        status = s;
    }
    bool getStatus() {
        return status;
    }
    Book(string a, string t) {
        author = a;
        title = t;
        status = 1;
    }
};

#endif /* Book_hpp */
