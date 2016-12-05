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
    int id;
    v.getReaderInfo(surname, name, id);
    
    BaseReader br(name, surname, id);
    
    Librarian libr(lib, br, v); //Библиотекарь libr работает в библиотеке lib
    
    libr.startCommunicationWithReader();
    
    return 0;
}
