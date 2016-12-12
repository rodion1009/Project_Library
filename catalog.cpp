#include "catalog.h"

Catalog::Catalog() {
    ifstream readers;
    readers.open(path);
    
    if (readers) {
        while (!readers.eof()) {
            string surname = "", name = "";
            readers >> surname;
            readers >> name;
            add(surname, name);
        }
    }
    
    readers.close();
}

int Catalog::hashFunction(string s) {
    int hash = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        hash += s[i];
    }
    return -(hash % 256);
}

bool Catalog::find(string s, string nm) {
    int h = hashFunction(s);
    if (catalog[h] != NULL) {
        Node* current = catalog[h];
        bool found = false;
        while (!found && current != NULL) {
            string sr = "", n = "";
            sr = current->surname;
            n = current->name;
            if (!sr.compare(s) && !n.compare(nm)) {
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
    int h = hashFunction(sr);
    if (catalog[h] == NULL) {
        catalog[h] = new Node(sr, n);
    } else {
        Node* current = catalog[h];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new Node(sr, n);
    }
}

void Catalog::addToFile(string sn, string n) {
    ofstream readers;
    readers.open(path, ios_base::app);
    readers << endl << sn << " " << n;
}
