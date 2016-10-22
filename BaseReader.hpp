#ifndef BaseReader_hpp
#define BaseReader_hpp

#include <stdio.h>
#include "Reader.hpp"

class BaseReader: public Reader {
    Book* takenBooks[3];
public:
    BaseReader(string sn, string n, int i) : Reader(sn, n, i) {}
};

#endif /* BaseReader_hpp */
