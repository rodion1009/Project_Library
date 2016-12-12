#ifndef Library_h
#define Library_h

#include <stdio.h>
#include <fstream>
#include <iostream>
#include "rb_tree.h"
#include "catalog.h"

class Library {
    const int amount = 100;
    const string path = "/Users/rodion/Documents/project_Library/Project_Library/books.txt";
public:
    Catalog catalog;
    Book *books[100];
    RB_tree tree; //красно-чёрное дерево для поиска книг
    Book* findBook(string); //Функция проверяет, есть ли данная книга в библиотеке
    int getAmount(void); //Количество книг в библиотеке
    Library();
    ~Library();
};

#endif /* Library_hpp */
