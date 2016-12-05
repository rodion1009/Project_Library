#ifndef stack_of_books_h
#define stack_of_books_h

#include "book.h"
#include "my_exception.h"

class Item {
public:
    Book* data;
    Item* next = NULL;
    Item(Book*);
};

class Stack_of_books {
    int amount = 0;
    Item* start = NULL;
public:
    void push(Book*);
    Book* pop(void);
};

#endif /* stack_of_books_h */
