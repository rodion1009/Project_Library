#ifndef Reader_hpp
#define Reader_hpp

#include <stdio.h>
#include <string>
#include "book.h"
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
    void askForBook(string title); //Взять книгу в библиотеке
    void returnBook(); //Вернуть книгу в библиотеку
};

#endif /* Reader_hpp */
