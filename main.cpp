#include <iostream>
#include "library.h"
#include "librarian.h"
#include "base_reader.h"
using namespace std;

int main(void) {
    Library lib;
    lib.books[0] = new Book("Автор", "Название");
    
    Librarian libr(lib); //Библиотекарь libr работает в библиотеке lib
    
    BaseReader br("Иван", "Иванов", 25481);
    br.askForBook(libr, "Название");
    return 0;
}
