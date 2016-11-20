#include "reader.h"

void Reader::takeBook(Book *b) {
    if (b != NULL) {
        cout << "Книга получена\n";
    } else {
        cout << "Книга не найдена\n";
    }
    //TODO: Добавить взятую книгу (если она была получена) в массив книг у читателя
}

Book* Reader::returnBook(void) {
    //TODO: Удалить книгу из массива книг у читателя
    return NULL;
}
