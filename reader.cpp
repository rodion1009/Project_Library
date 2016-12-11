#include "reader.h"

void Reader::takeBook(Book *b) {
    if (b != NULL) {
        cout << "Книга получена\n";
    } else {
        cout << "Книга не найдена\n";
    }
    try {
        books.push(b);
    } catch (MyException e) {
        cout << "Невозможно взять большее количество книг";
    }
}

Book* Reader::returnBook(void) {
    try {
        return books.pop();
    } catch (MyException e) {
        cout << "Нет книг, которые можно вернуть";
        return NULL;
    }
}
