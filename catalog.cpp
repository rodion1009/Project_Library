#include "catalog.h"

Catalog::Catalog() {
    ifstream readers;
    readers.open("/Users/rodion/Documents/project_Library/Project_Library/readers.txt");
    
    if (readers) {
        string surname = "", name = "";
        while (!readers.eof()) {
            readers >> surname >> name;
            add(surname, name);
        }
    }
    
    readers.close();
}

int Catalog::hashFunction(string s) {
    int hash;
    for (int i = 0; i < s.length(); i++) {
        hash += (unsigned char)s[i];
    }
    return (hash % 256);
}

bool Catalog::find(string s) {
    if (catalog[hashFunction(s)] != NULL) {
        Node* current = catalog[hashFunction(s)];
        bool found = false;
        while (!found && current != NULL) {
            if (current->surname.compare(s) == 0) {
                found = true;
            } else {
                current = current->next;
            }
        }
        return found;
    } else {
        return false;
    }
}

void Catalog::add(string sr, string n) {
    if (catalog[hashFunction(sr)] == NULL) {
        catalog[hashFunction(sr)] = new Node(sr, n);
    } else {
        Node* current = catalog[hashFunction(sr)];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new Node(sr, n);
    }
}
