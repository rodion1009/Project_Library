#ifndef premium_reader_h
#define premium_reader_h

#include <stdio.h>
#include "reader.h"

class PremiumReader: public Reader {
    Book* takenBooks[10];
public:
    PremiumReader(string sn, string n) : Reader(sn, n) {}
};

#endif /* PremiumReader_hpp */
