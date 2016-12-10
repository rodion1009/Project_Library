#ifndef stack_of_books_h
#define stack_of_books_h

#include "book.h"
#include "my_exception.h"
#include "list.h"

template <class T>
class Stack: public List<T> {
public:
    void push(T*);
    T* pop(void);
};

template <class T>
void Stack<T>::push(T *d) {
    if (this->start != NULL) {
        ListNode<T> *tmp = this->start;
        this->start = new ListNode<T>(d);
        this->start->next = tmp;
    } else {
        this->start = new ListNode<T>(d);
    }
    this->amount++;
}

template <class T>
T* Stack<T>::pop() {
    if ((this->amount > 0) && (this->start != NULL)) {
        ListNode<Book> *tmp = this->start;
        T* tmpd = this->start->data;
        if (this->amount > 1) {
            this->start = this->start->next;
            tmp->~ListNode();
        } else if (this->amount > 0) {
            this->start->~ListNode();
            this->start = NULL;
        }
        this->amount--;
        return tmpd;
    } else {
        throw MyException("Стэк пуст");
    }
}

#endif /* stack_of_books_h */
