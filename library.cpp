#include "library.h"

Library::Library() {
    books[0] = new Book("Пушкин", "Дубровский");
    books[1] = new Book("Достоевский", "Преступление и наказание");
    books[2] = new Book("Булгаков", "Мастер и Маргарита");
    books[3] = new Book("Толстой", "Война и мир");
    books[4] = new Book("Гоголь", "Мёртвые души");
}

bool Library::checkBook(string b) {
    return true;
    //В дальнейшем здесь будет реализован поиск по структуре, содержащей книги
}

int Library::amountOfBooks() {
    return sizeof(books)/sizeof(Book*);
}
