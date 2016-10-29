#include <stdio.h>
#include "catalog.h"

int Catalog::hashFunction(int n) {
    return (n % 17);
}

bool Catalog::find(int reader_id) {
    bool found = false;
    if (!(catalog[hashFunction(reader_id)] == NULL)) {
        El* current = catalog[hashFunction(reader_id)];
        while (current->next != NULL && !found) {
            if (current->readerID == reader_id) {
                found = true;
            } else {
                current = current->next;
            }
        }
    }
    return found;
}

void Catalog::add() {
    
}
