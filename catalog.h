#ifndef catalog_h
#define catalog_h

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Node {
public:
    string surname;
    string name;
    Node* next;
    Node(string sr, string n) {
        surname = sr;
        name = n;
        next = NULL;
    }
};

class Catalog {
public:
    Node* catalog[256] = {NULL};
    void add(string, string);
    bool find(string);
    int hashFunction(string);
    Catalog();
};


#endif /* catalog_h */
