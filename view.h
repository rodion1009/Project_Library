#ifndef View_h
#define View_h
#include <iostream>
#include <string>
#include <cstdio>
#include "library.h"
using namespace std;

class View {
public:
    int menu();
    void noSuchVariant();
    void noSuchBook();
    void whatBook(string&);
    void getReaderInfo(string&, string&);
    void printListOfBooks(Library*);
    int variantsOfBook();
    void added();
    int somethingElse();
    void hello();
    void noMoreBooks();
    void noBooks();
    void result(bool);
};

#endif /* View_h */
