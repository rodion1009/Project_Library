#include "view.h"

void View::hello() {
    cout << "Здравствуйте. Что Вы хотели?\n";
}

int View::menu() {
    cout << "   1. Взять книгу\n";
    cout << "   2. Вернуть книгу\n";
    cout << "   3. Вывести список книг, которые я взял\n";
    cout << "Ваш выбор: ";
    int c;
    cin >> c;
    return c;
}

void View::printListOfBooks(Library *l) {
    for (int i = 0; i < l->getAmount(); i++) {
        printf("%s - \"%s\" \n", l->books[i]->getAutor().c_str(), l->books[i]->getTitle().c_str());
    }
}

int View::variantsOfBook() {
    int c;
    cout << "Вывести список книг?\n" << "   1. Да\n" << "   0. Нет\n" << "Ваш выбор: ";
    cin >> c;
    return c;
}

void View::noSuchVariant() {
    cout << "Выбранного варианта не существует\n";
}

void View::noSuchBook() {
    cout << "К сожалению, в нашей библиотеке нет такой книги\n";
}

void View::whatBook(string &title) {
    cout << "Какую книгу Вы хотите взять?\n";
    cout << "Название: ";
    cin.ignore();
    getline(cin, title);
}

void View::getReaderInfo(string &s, string &n) {
    cout << "Библиотека v. 1.0\n";
    cout << "Вы - читатель\n\n";
    cout << "Введите вашу фамилию: ";
    cin >> s;
    cout << "Введите ваше имя: ";
    cin >> n;
}

void View::added() {
    cout << "Новый читатель был добавлен в каталог\n";
}

int View::somethingElse() {
    cout << "Что-нибудь ещё?\n";
    cout << "   1. Да\n" << "   0. Нет\n";
    cout << "Ваш выбор: ";
    int answer;
    cin >> answer;
    return answer;
}

void View::noMoreBooks() {
    cout << "Невозможно взять большее количество книг";
}

void View::noBooks() {
    cout << "У вас нет книг\n";
}
void View::result(bool a) {
    if (a) {
        cout << "Книга получена\n";
    } else {
        cout << "Книга не найдена\n";
    }
}
