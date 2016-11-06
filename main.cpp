#include "library.h"
#include "librarian.h"
#include "base_reader.h"
#include "view.h"

int main(void) {
    Library lib;
    View v;

    //Ввод информации о читателе
    string name, surname;
    int id;
    cout << "Библиотека v. 1.0\n";
    cout << "Вы - читатель\n\n";
    cout << "Введите вашу фамилию: ";
    cin >> surname;
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш номер читателя: ";
    cin >> id;
    
    BaseReader br(name, surname, id);
    
    
    
    //добавление книг в библиотеку для тестирования
    lib.books[0] = new Book("Пушкин", "Дубровский");
    lib.books[1] = new Book("Булгаков", "Мастер и Маргарита");
    lib.books[2] = new Book("Достоевский", "Преступление и наказание");
    lib.books[3] = new Book("Толстой", "Война и мир");
    lib.books[4] = new Book("Гоголь", "Мёртвые души");
    
    Librarian libr(lib, br, v); //Библиотекарь libr работает в библиотеке lib
    
    return 0;
}
