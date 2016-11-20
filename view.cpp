#include "view.h"

int View::menu() {
    cout << "Здравствуйте. Что Вы хотели?\n";
    cout << "1. Взять книгу\n";
    cout << "2. Вернуть книгу\n";
    cout << "Ваш выбор: ";
    int c;
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

void View::getReaderInfo(string &s, string &n, int &i) {
    cout << "Библиотека v. 1.0\n";
    cout << "Вы - читатель\n\n";
    cout << "Введите вашу фамилию: ";
    cin >> s;
    cout << "Введите ваше имя: ";
    cin >> n;
    cout << "Введите ваш номер читателя: ";
    cin >> i;
}
