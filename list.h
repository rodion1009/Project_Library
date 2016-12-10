#ifndef list_h
#define list_h

template <class T>
class ListNode {
public:
    T *data;
    ListNode *next = NULL;
    ListNode(T *d) {
        data = d;
    }
};

template <class T>
class List {
public:
    ListNode<T> *start = NULL;
    unsigned int amount = 0;
    virtual void push(T *d)  {
        if (start == NULL) {
            start = new ListNode<T>(d);
        } else {
            ListNode<T> *current = start;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new ListNode<T>(d);
        }
        amount++;
    }
};

#endif /* list_h */
