#include "library.h"
#include "librarian.h"
#include "view.h"

int main(void) {
    Library lib;
    View v;
    
    //Ввод информации о читателе
    string name, surname;
    v.getReaderInfo(surname, name);
    
    Reader r(surname, name, v);
    
    Librarian libr(lib, r, v); //Библиотекарь libr работает в библиотеке lib
    
    libr.startCommunicationWithReader();
    
    libr.putBooksOnTheShelf();
    
    return 0;
}
