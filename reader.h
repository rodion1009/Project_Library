#ifndef Reader_hpp
#define Reader_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "book.h"
#include "queue.h"
using namespace std;

class Reader {
protected:
    string surname;
    string name;
    Queue<Book> books = Queue<Book>(0);
public:
    void setSurname(string sn) {
        surname = sn;
    }
    string getSurname() {
        return surname;
    }
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    Reader(string sn, string n) {
        surname = sn;
        name = n;
    }
    void takeBook(Book*); //Взять книгу от библиотекаря и положить её в очередь (указазатели на книгу)
    Book* returnBook(void); //Взять указатель на книгу из очереди книг (будет реализована в дальнейшем) и вернуть его библиотекарю
};

#endif /* Reader_hpp */
