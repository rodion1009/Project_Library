#ifndef Librarian_h
#define Librarian_h

#include <stdio.h>
#include "library.h"
#include "stack_of_books.h"
#include "reader.h"
#include "view.h"

class Librarian {
    Library *lib;
    Reader *r;
    View *v;
    Stack<Book> returnedBooks;
public:
    Librarian(Library &l, Reader &re, View &vi) {
        lib = &l;
        r = &re;
        v = &vi;
    }
    void startCommunicationWithReader();
    void mainActions();
    void getBookFromTheReader();
    void putBooksOnTheShelf();
};

#endif /* Librarian_hpp */
