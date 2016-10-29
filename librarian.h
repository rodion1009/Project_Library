#ifndef Librarian_h
#define Librarian_h

#include <stdio.h>
#include "library.h"
#include "stack_of_books.h"

class Librarian {
    Library *lib;
    Stack_of_books returnedBooks;
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
