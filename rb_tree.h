#ifndef rb_tree_h
#define rb_tree_h

#include "book.h"

class TreeNode {
public:
    Book* data;
    TreeNode *left, *right, *parent;
    char colour;
    TreeNode(Book* d) {
        data = d;
        left = NULL;
        right = NULL;
        parent = NULL;
        colour = 'r';
    }
};

class RB_tree {
public:
    TreeNode *root = NULL;
    TreeNode *grandparent(TreeNode *n);
    TreeNode *uncle(TreeNode *n);
    void add(Book* b, TreeNode *current);
    void leftRotate(TreeNode *n);
    void rightRotate(TreeNode *n);
    void fix1(TreeNode *n);
    void fix2(TreeNode *n);
    void fix3(TreeNode *n);
    void fix4(TreeNode *n);
    void fix5(TreeNode *n);
    Book* find(string, TreeNode*);
    bool isLeaf(TreeNode*);
    //~RB_tree();
};


#endif /* rb_tree_h */
