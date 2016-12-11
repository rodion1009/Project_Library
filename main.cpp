#include "library.h"
#include "librarian.h"
#include "view.h"

int main(void) {
    Library lib;
    View v;
    
    //Ввод информации о читателе
    string name, surname;
    v.getReaderInfo(surname, name);
    
    Reader br(name, surname);
    
    Librarian libr(lib, br, v); //Библиотекарь libr работает в библиотеке lib
    
    libr.startCommunicationWithReader();
    
    return 0;
}
