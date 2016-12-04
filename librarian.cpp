#include "librarian.h"

bool Librarian::checkReaderInReadersCatalog(int id) {
    //Метод проверяет, есть ли читатель в каталоге читателей
    return 0;
}

Book* Librarian::takeBookToTheReader(string &ttl) {
    //Выдать книгу читателю (вернуть указатель не неё, чтобы читатель добавил его в свою очередь книг)
    cout << ttl << " - искомая книга\n";
    Book* b = NULL;
    bool found = false;
    int i = 0;
    while ((!found) && (i < 100)) {
        if (lib->books[i]->getTitle().compare(ttl) == 0) {
            found = true;
            b = lib->books[i];
        }
        i++;
    }
    return b;
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


void Librarian::startCommunicationWithReader() {    //Основная логика будет происходить здесь
    //Библиотекарь должен проверять наличие читателя в каталоге читателей
    //Если читатель найден в каталоге, библиотекарь, должен проверить, есть ли требуемая книга в библиотеке
    //Если читатель не найден, зарегистрировать читателя в библиотеке (внести в каталог)
    
    if (!checkReaderInReadersCatalog(r->getID())) {
        //lib->addReaderToTheCatalog(r->getSurname(), r->getName(), r->getID()); (Вызывать только после того, как процедура будет реализована)
    };
    switch (v->menu()) {
        case 1: {
            if (v->variantsOfBook()) {
                v->printListOfBooks(lib);
            }
            string book;
            v->whatBook(book);
            if (lib->checkBook(book)) {   //пока всегда будет возвращать истину
               r->takeBook(takeBookToTheReader(book)); //Если книга есть в библиотеке, взять её и передать читателю
            } else {
                v->noSuchBook();
            }
            break;
            
        }
        case 2:
            //getBookFromTheReader(r->returnBook());
            break;
        default:
            v->noSuchVariant();
            break;
    }
}
