#include <iostream>
#include <string>
#include <map>

using namespace std;

// Функция для шифрования текста
string encrypt(string text, map<char, char> substitutionTable) {
    string encryptedText = "";
    for (char c : text) {
        if (substitutionTable.count(c)) {
            encryptedText += substitutionTable[c];
        } else {
            encryptedText += c;
        }
    }
    return encryptedText;
}

int main() {
    // Создаем таблицу замены, пример
    map<char, char> substitutionTable = {
        {'a', 'c'},
        {'b', 'd'},
        {'c', 'e'},
        {'d', 'f'},
        {'e', 'g'},
        {'f', 'h'},
        {'g', 'i'},
        {'h', 'j'},
        {'i', 'k'},
        {'j', 'l'},
        {'k', 'm'},
        {'l', 'n'},
        {'m', 'o'},
        {'n', 'p'},
        {'o', 'q'},
        {'p', 'r'},
        {'q', 's'},
        {'r', 't'},
        {'s', 'u'},
        {'t', 'v'},
        {'u', 'w'},
        {'v', 'x'},
        {'w', 'y'},
        {'x', 'z'},
        {'y', 'a'},
        {'z', 'b'}
    };

    // Получаем слово от пользователя
    string text;
    cout << "Введите слово для шифрования: ";
    getline(cin, text);

    // Шифруем слово
    string encryptedText = encrypt(text, substitutionTable);

    // Выводим зашифрованное слово
    cout << "Зашифрованное слово: " << encryptedText << endl;

    return 0;
}