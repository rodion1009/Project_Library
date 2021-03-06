#include "rb_tree.h"

TreeNode *RB_tree::grandparent(TreeNode *n) {
    if ((n != NULL) && (n->parent != NULL))
        return n->parent->parent;
    else
        return NULL;
}

TreeNode *RB_tree::uncle(TreeNode *n) {
    TreeNode *g = grandparent(n);
    if (g == NULL)
        return NULL;
    if (n->parent == g->left)
        return g->right;
    else
        return g->left;
}

void RB_tree::add(Book* b, TreeNode *current) {
    if (root == NULL) {
        root = new TreeNode(b);
        fix1(root);
        return;
    } else {
        if (b->getTitle().compare(current->data->getTitle()) < 0) {
            if (current->left != NULL) {
                current = current->left;
                add(b, current);
            } else {
                current->left = new TreeNode(b);
                current->left->parent = current;
                fix1(current->left);
            }
        } else if (b->getTitle().compare(current->data->getTitle()) > 0) {
            if (current->right != NULL) {
                current = current->right;
                add(b, current);
            } else {
                current->right = new TreeNode(b);
                current->right->parent = current;
                fix1(current->right);
            }
        }
    }
}

void RB_tree::leftRotate(TreeNode *n) {
    TreeNode *pivot = n->right;
    if (n->parent == NULL)
        root = pivot;
    pivot->parent = n->parent;
    if (n->parent != NULL) {
        if (n->parent->left == n) {
            n->parent->left = pivot;
        } else {
            n->parent->right = pivot;
        }
    }
    n->right = pivot->left;
    if (pivot->left != NULL)
        pivot->left->parent = n;
    n->parent = pivot;
    pivot->left = n;
}

void RB_tree::rightRotate(TreeNode *n) {
    TreeNode *pivot = n->left;
    if (n->parent == NULL)
        root = pivot;
    pivot->parent = n->parent;
    if (n->parent != NULL) {
        if (n->parent->left == n)
            n->parent->left = pivot;
        else
            n->parent->right = pivot;
    }
    n->left = pivot->right;
    if (pivot->right != NULL)
        pivot->right->parent = n;
    n->parent = pivot;
    pivot->right = n;
}

void RB_tree::fix1(TreeNode *n) {
    if (n->parent == NULL) {
        n->colour = 'b';
    } else {
        fix2(n);
    }
}

void RB_tree::fix2(TreeNode *n) {
    if (n->parent->colour == 'b')
        return;
    else
        fix3(n);
}

void RB_tree::fix3(TreeNode *n) {
    TreeNode *u = uncle(n), *g;
    if ((u != NULL) && (u->colour == 'r') && (n->parent->colour == 'r')) {
        n->parent->colour = 'b';
        u->colour = 'b';
        g = grandparent(n);
        g->colour = 'r';
        fix1(g);
    } else {
        fix4(n);
    }
}

void RB_tree::fix4(TreeNode *n) {
    TreeNode *g = grandparent(n);
    if ((n == n->parent->right) && (n->parent == g->left)) {
        leftRotate(n->parent);
        n = n->left;
    } else if ((n == n->parent->left) && (n->parent == g->right)) {
        rightRotate(n->parent);
        n = n->right;
    }
    fix5(n);
}

void RB_tree::fix5(TreeNode *n) {
    TreeNode *g = grandparent(n);
    n->parent->colour = 'b';
    g->colour = 'r';
    if ((n == n->parent->left) && (n->parent == g->left)) {
        rightRotate(g);
    } else {
        leftRotate(g);
    }
}

Book* RB_tree::find(string t, TreeNode *current) {
    while (current != NULL) {
        if (t.compare(current->data->getTitle()) < 0) {
            current = current->left;
        } else if (t.compare(current->data->getTitle()) > 0) {
            current = current->right;
        } else if (t.compare(current->data->getTitle()) == 0) {
            return current->data;
        }
    }
    return NULL;
}

bool RB_tree::isLeaf(TreeNode *n) {
    if (!n->left && !n->right) {
        return true;
    } else {
        return false;
    }
}

//RB_tree::~RB_tree() {
//    TreeNode *current = root;
//    while (current) {
//        if (current->left) {
//            if (isLeaf(current->left))
//                current->left->~TreeNode();
//            else
//                current = current->left;
//        }
//        
//        if (current->right) {
//            if (isLeaf(current->right))
//                current->right->~TreeNode();
//            else
//                current = current->right;
//        }
//        
//        current = current->parent;
//    }
//    root->~TreeNode();
//}
