#include "reader.h"

void Reader::askForBook(Librarian &libr, string title) {
    libr.getReaderRequest(title, this->id);
    //TODO: Добавить взятую книгу (если она была получена) в массив книг у читателя
}

void Reader::returnBook(Librarian &libr) {
    //TODO: Удалить книгу из массива книг у читателя
}
