#ifndef Librarian_h
#define Librarian_h

#include <stdio.h>
#include "library.h"

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
