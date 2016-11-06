#include "librarian.h"

bool Librarian::checkReaderInReadersCatalog(int id) {
    //Метод проверяет, есть ли читатель в каталоге читателей
    return 0;
}

Book* Librarian::takeBookToTheReader(string title) {
    //Выдать книгу читателю (вернуть указатель не неё, чтобы добавить его в массив книг у читателя)
    return NULL;
}

void Librarian::getBookFromTheReader(Book* book) {
    //Получить книгу (указатель на неё) от читателя и добавить её в стек книг, которые читатели вернули
}

void Librarian::getBookFromTheShelf() {
    //Взять книгу с полки (присвоить книги в массиве книг статус 0)
}

void Librarian::putBooksOnTheShelf() {
    //Вернуть книги из стека на полки (присвоить книгам в массиве статус 1 и удалить их из стека)
}


void Librarian::startCommunicationWithReader() {
    //Библиотекарь должен проверять наличие читателя в каталоге читателей
    //Если читатель найден в каталоге, библиотекарь, должен проверить, есть ли требуемая книга в библиотеке
    //Если читатель не найден, зарегистрировать читателя в библиотеке (внести в каталог)
    
    v->printMenu(); //отображение меню
    
    if (!checkReaderInReadersCatalog(r->getID())) {
        //lib->addReaderToTheCatalog("0", "0", id); (Вызывать только после того, как процедура будет реализована)
    };
    
}
