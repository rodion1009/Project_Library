#include "library.h"

Library::Library() {
    ifstream f;
    f.open("/Users/rodion/Documents/project_Library/Project_Library/books.txt");
    
    string str, a, t;
    int k = 0;
    
    if (!f) {
        cout << "Произошла ошибка при чтении файла!\n";
    } else {
        while (!f.eof()) {
            str = ""; a = ""; t = "";
            getline(f, str); //Считываем строку из файла
            
            //Получаем автора
            for (int i = 0; str[i+1] != '-'; i++) {
                a += str[i];
            }
            
            //Получаем название книги (+3 для того, чтобы не читать пробелы и -)
            for (long int i = a.length()+3; str[i] != '\0'; i++) {
                t += str[i];
            }
            
            books[k] = new Book(a, t);
            k++;
        }
    }
    
    f.close();
    
    for (int i = 0; i < 100; i++) {
        tree.add(books[i], tree.root);
    }
}

Book* Library::findBook(string b) {
    Book* bk = NULL;
    bk = tree.find(b, tree.root);
    if (bk != NULL) {
        return bk;
    } else {
        return NULL;
    }
}

int Library::amountOfBooks() {
    return sizeof(books)/sizeof(Book*);
}
