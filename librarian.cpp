#include "librarian.h"

void Librarian::getBookFromTheReader() {
    //Получить книгу (указатель на неё) от читателя и добавить её в стек книг, которые читатели вернули
    Book *rb = r->returnBook();
    if (rb) {
        returnedBooks.push(rb);
    }
}

void Librarian::putBooksOnTheShelf() {
    //Вернуть книги из стека на полки (присвоить книгам в массиве статус 1 и удалить их из стека)
    while (returnedBooks.amount) {
        (returnedBooks.pop())->setStatus(1);
    }
}

void Librarian::mainActions() {
    switch (v->menu()) {
        case 1: {
            if (v->variantsOfBook()) {
                v->printListOfBooks(lib);
            }
            string book;
            v->whatBook(book);
            Book* bk = NULL;
            bk = lib->findBook(book);
            if (bk != NULL) {
                bk->setStatus(0); //Книга взята с полки
                r->takeBook(bk); //Если книга есть в библиотеке, взять её и передать читателю
            } else {
                v->noSuchBook();
            }
            break;
            
        }
        case 2:
            getBookFromTheReader();
            break;
        case 3:
            r->printMyBooks();
            break;
        default:
            v->noSuchVariant();
            break;
    }
    if (v->somethingElse()) {
        mainActions();
    }
}


void Librarian::startCommunicationWithReader() {    //Основная логика будет происходить здесь
    //Библиотекарь должен проверять наличие читателя в каталоге читателей
    //Если читатель найден в каталоге, библиотекарь, должен проверить, есть ли требуемая книга в библиотеке
    //Если читатель не найден, зарегистрировать читателя в библиотеке (внести в каталог)
    
    if (!lib->catalog.find(r->getSurname(), r->getName())) {
        lib->catalog.add(r->getSurname(), r->getName());
        lib->catalog.addToFile(r->getSurname(), r->getName());
        v->added();
    };
    v->hello();
    mainActions();
}
