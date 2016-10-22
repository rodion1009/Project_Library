#ifndef Librarian_hpp
#define Librarian_hpp

#include <stdio.h>
#include "Library.hpp"

class Librarian {
    Library *lib;
    //TODO: добавить стек книг, которые вернули читатели
public:
    Librarian(Library l) {
        lib = &l;
    }
    void getReaderRequest(string t, int id);
    bool checkReaderInReadersCatalog(int id);
    Book* takeBookToTheReader(string title);
    void getBookFromTheReader(Book* book);
    void getBookFromTheShelf();
    void putBooksOnTheShelf();
};

#endif /* Librarian_hpp */
