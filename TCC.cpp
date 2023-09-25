#include <iostream>
#include <string>

using namespace std;

string caesarCipher(string text, int shift)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isalpha(text[i])) // проверяем, является ли символ буквой
        {
            int letter = tolower(text[i]) - 'a'; // приводим символ к нижнему регистру и вычитаем код символа 'a'
            letter = (letter + shift) % 26; // вычисляем новый индекс буквы с учетом сдвига
            result += char(letter + 'a'); // приводим индекс обратно к коду символа буквы и добавляем шифрованную букву в результат
        }
        else
        {
            result += text[i]; // добавляем неизмененный символ в результат, если это не буква
        }
    }

    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string text;
    int shift;

    cout << "Введите текст для шифрования: ";
    getline(cin, text);

    cout << "Введите сдвиг: ";
    cin >> shift;

    string encryptedText = caesarCipher(text, shift);

    cout << "Шифрованный текст: " << encryptedText << endl;

    return 0;
}