#ifndef Reader_hpp
#define Reader_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "book.h"
#include "queue.h"
#include "view.h"
using namespace std;

class Reader {
private:
    View *v;
protected:
    string surname;
    string name;
    Queue<Book> books {10};
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
    Reader(string sn, string n, View &view) {
        surname = sn;
        name = n;
        v = &view;
    }
    void takeBook(Book*); //Взять книгу от библиотекаря и положить её в очередь (указазатели на книгу)
    Book* returnBook(void); //Взять указатель на книгу из очереди книг (будет реализована в дальнейшем) и вернуть его библиотекарю
    void printMyBooks();
};

#endif /* Reader_hpp */
