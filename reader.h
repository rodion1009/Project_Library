#ifndef Reader_hpp
#define Reader_hpp

#include <stdio.h>
#include <string>
#include "book.h"
#include <iostream>
using namespace std;

class Reader {
protected:
    string surname;
    string name;
    int id;
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
    void setID(int n) {
        id = n;
    }
    int getID() {
        return id;
    }
    Reader(string sn, string n, int i) {
        surname = sn;
        name = n;
        id = i;
    }
    void takeBook(Book*); //Взять книгу от библиотекаря и положить её в очередь (указазатели на книгу)
    Book* returnBook(void); //Взять указатель на книгу из очереди книг (будет реализована в дальнейшем) и вернуть его библиотекарю
};

#endif /* Reader_hpp */
