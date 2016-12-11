#ifndef queue_h
#define queue_h
#include "list.h"
#include "my_exception.h"

template <class T>
class Queue: public List<T> {

public:
    int maxAmount;
    List<T> list;
    T* pop();
    Queue(int n) {
        maxAmount = n;
    }
    bool isEmpty() {
        if (this->amount == 0)
            return true;
        else
            return false;
    }
    bool isFull() {
        if (this->amount == maxAmount)
            return true;
        else
            return false;
    }
    void push(T* d);
};

template <class T>
T* Queue<T>::pop() {
    if (isEmpty()) {
        throw MyException("Очередь пуста");
    }
    ListNode<T> *current = this->start;
    T *tmp;
    if (this->amount > 1) {
        tmp = current->data;
        this->start = current->next;
        current->~ListNode<T>();
    } else {
        tmp = this->start->data;
        this->start->~ListNode<T>();
        this->start = NULL;
    }
    this->amount--;
    return tmp;
}

template <class T>
void Queue<T>::push(T *d) {
    if (isFull()) {
        throw MyException("Очередь переполнена");
    }
    List<T>::push(d);
}

#endif /* queue_h */
