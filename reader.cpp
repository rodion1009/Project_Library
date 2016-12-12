#include "reader.h"

void Reader::takeBook(Book *b) {
    if (b != NULL) {
        v->result(true);
    } else {
        v->result(false);
    }
    try {
        books.push(b);
    } catch (MyException e) {
        v->noMoreBooks();
    }
}

Book* Reader::returnBook(void) {
    try {
        return books.pop();
    } catch (MyException e) {
        v->noBooks();
        return NULL;
    }
}

void Reader::printMyBooks() {
    ListNode<Book> *current = books.start;
    if (current == NULL) {
        v->noBooks();
    }
    while (current != NULL) {
        cout << current->data->getTitle() << endl;
        current = current->next;
    }
}
