#include <stdio.h>
#include "stack_of_books.h"

Item::Item(Book* d) {
    data = d;
    next = NULL;
}

void Stack_of_books::push(Book* d) {
    if (start != NULL) {
        Item *tmp = start;
        start = new Item(d);
        start->next = tmp;
    } else {
        start = new Item(d);
    }
    amount++;
}

Book* Stack_of_books::pop() {
    if ((amount > 0) && (start != NULL)) {
        Item *tmp = start;
        Book* tmpd = start->data;
        if (amount > 1) {
            start = start->next;
            tmp->~Item();
        } else if (amount > 0) {
            start->~Item();
            start = NULL;
        }
        amount--;
        return tmpd;
    } else {
        throw MyException("Стэк пуст");
    }
}
