#ifndef base_reader_h
#define base_reader_h

#include <stdio.h>
#include "reader.h"

class BaseReader: public Reader {
    Queue<Book> books = Queue<Book>(3);
public:
    BaseReader(string sn, string n) : Reader(sn, n) {}
};

#endif /* BaseReader_hpp */
