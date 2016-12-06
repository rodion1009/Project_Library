#include "library.h"
#include "librarian.h"
#include "base_reader.h"
#include "view.h"
#include "catalog.h"

int main(void) {
    Library lib;
    View v;
    
    //Ввод информации о читателе
    string name, surname;
    v.getReaderInfo(surname, name);
    
    BaseReader br(name, surname);
    
    Librarian libr(lib, br, v); //Библиотекарь libr работает в библиотеке lib
    
    libr.startCommunicationWithReader();
    
    return 0;
}
