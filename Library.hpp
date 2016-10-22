#ifndef Library_hpp
#define Library_hpp

#include <stdio.h>
#include "Book.hpp"

class Library {
public:
    //TODO: добавить каталог читателей, представленный хэш-таблицей
    Book *books[];
    bool checkBook(string a, string n); //Функция проверяет, есть ли данная книга в библиотеке
    void sortBooksByAuthor(); //Сортировка массива книг
    void addReaderToTheCatalog(string sn, string n, int id); //Добавить читателя в каталог
};

#endif /* Library_hpp */
