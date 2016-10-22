#ifndef PremiumReader_hpp
#define PremiumReader_hpp

#include <stdio.h>
#include "Reader.hpp"

class PremiumReader: public Reader {
    Book* takenBooks[10];
public:
    PremiumReader(string sn, string n, int i) : Reader(sn, n, i) {}
};

#endif /* PremiumReader_hpp */
