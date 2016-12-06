#ifndef Library_h
#define Library_h

#include <stdio.h>
#include <fstream>
#include <iostream>
#include "rb_tree.h"

class Library {
public:
    static const int amount = 100;
    //TODO: добавить каталог читателей, представленный хэш-таблицей
    Book *books[100];
    RB_tree tree; //красно-чёрное дерево для поиска книг
    Book* findBook(string); //Функция проверяет, есть ли данная книга в библиотеке
    void addReaderToTheCatalog(string sn, string n, int id); //Добавить читателя в каталог
    int amountOfBooks(void); //Количество книг в библиотеке
    Library();
    //~Library();
};

#endif /* Library_hpp */
