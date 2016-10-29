#include <stdio.h>
#include "stack_of_books.h"

bool Stack_of_books::isEmpty() {
    if (start->next == NULL) {
        return true;
    } else {
        return false;
    }
}

void Stack_of_books::push(Book* b) {
    if (!isEmpty()) {
        Elem* tmp = start->next;    //сохраняем адрес элемента, который идёт за первым (пустым)
        start->next = new Elem(b);
        start->next->next = tmp;
    } else {
        start->next = new Elem(b);
    }
}

Book* Stack_of_books::pop() {
    if (!isEmpty()) {
        Elem* current = start->next;
        start->next = current->next;
        return current->b;
    } else {
        return NULL;            //TODO: генерировать исключение
    }
}
