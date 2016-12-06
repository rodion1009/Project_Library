#ifndef rb_tree_h
#define rb_tree_h

#include "book.h"

struct node {
    Book* data;
    struct node *left, *right, *parent;
    char colour;
    node(Book* d) {
        data = d;
        left = NULL;
        right = NULL;
        parent = NULL;
        colour = 'r';
    }
};

class RB_tree {
public:
    struct node *root = NULL;
    struct node *grandparent(struct node *n);
    struct node *uncle(struct node *n);
    void add(Book* b, struct node *current);
    void leftRotate(struct node *n);
    void rightRotate(struct node *n);
    void fix1(struct node *n);
    void fix2(struct node *n);
    void fix3(struct node *n);
    void fix4(struct node *n);
    void fix5(struct node *n);
    Book* find(string, struct node*);
    bool isLeaf(struct node*);
    //~RB_tree();
};


#endif /* rb_tree_h */
