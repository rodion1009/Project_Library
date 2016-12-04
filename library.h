#ifndef Library_h
#define Library_h

#include <stdio.h>
//#include "book.h"
#include <fstream>
#include <iostream>
#include "rb_tree.h"

class Library {
public:
    //TODO: добавить каталог читателей, представленный хэш-таблицей
    Book *books[100];
    bool checkBook(string); //Функция проверяет, есть ли данная книга в библиотеке
    void sortBooksByAuthor(); //Сортировка массива книг
    void addReaderToTheCatalog(string sn, string n, int id); //Добавить читателя в каталог
    int amountOfBooks(void); //Количество книг в библиотеке
    Library();
};

#endif /* Library_hpp */
