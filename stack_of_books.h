#ifndef stack_of_books_h
#define stack_of_books_h

#include "book.h"

class Elem {
public:
    Book* b;
    Elem* next;
    Elem() {
        next = NULL;
    }
    Elem(Book* b) {
        this->b = b;
        next = NULL;
    }
};

//Стек будет реализован свзяным списком
class Stack_of_books {
public:
    Elem* start;
    bool isEmpty();
    void push(Book* b);  //Добавить в стек
    Book* pop();         //Взять из стека
    Stack_of_books() {
        start = new Elem(); //Добавить первый головной элемент в список
    }
};

#endif /* stack_of_books_h */
