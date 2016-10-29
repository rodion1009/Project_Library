#include <iostream>
#include "library.h"
#include "librarian.h"
#include "base_reader.h"
using namespace std;

int main(void) {
    Library lib;
    
    //добавление книг в библиотеку для тестирования
    lib.books[0] = new Book("Пушкин", "Дубровский");
    lib.books[1] = new Book("Булгаков", "Мастер и Маргарита");
    lib.books[2] = new Book("Достоевский", "Преступление и наказание");
    lib.books[3] = new Book("Толстой", "Война и мир");
    lib.books[4] = new Book("Гоголь", "Мёртвые души");
    
    Librarian libr(lib); //Библиотекарь libr работает в библиотеке lib
    
    BaseReader br("Иван", "Иванов", 25481);
    br.askForBook(libr, "Мастер и Маргарита");
    return 0;
}
