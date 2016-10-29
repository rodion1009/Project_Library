#ifndef base_reader_h
#define base_reader_h

#include <stdio.h>
#include "reader.h"

class BaseReader: public Reader {
    Book* takenBooks[3];
public:
    BaseReader(string sn, string n, int i) : Reader(sn, n, i) {}
};

#endif /* BaseReader_hpp */
