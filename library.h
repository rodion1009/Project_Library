#ifndef Library_h
#define Library_h

#include <stdio.h>
#include "book.h"

class Library {
public:
    //TODO: добавить каталог читателей, представленный хэш-таблицей
    Book *books[];
    bool checkBook(string); //Функция проверяет, есть ли данная книга в библиотеке
    void sortBooksByAuthor(); //Сортировка массива книг
    void addReaderToTheCatalog(string sn, string n, int id); //Добавить читателя в каталог
};

#endif /* Library_hpp */
