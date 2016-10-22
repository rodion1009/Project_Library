#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Book {
    string autor;
    string title;
    bool status;
public:
    void setAuthor(string a) {
        autor = a;
    }
    string getAutor() {
        return autor;
    }
    void setTitle(string t) {
        title = t;
    }
    string getTitle() {
        return title;
    }
    Book(string a, string t) {
        setAuthor(a);
        setTitle(t);
        status = 1;
    }
};

#endif /* Book_hpp */
