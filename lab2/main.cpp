#include <iostream>
#include <string>
using namespace std;

int main() {
    // Запитуємо ім'я користувача
    string name;
    cout << "Будь ласка, введіть ваше ім'я: ";
    cin >> name;

    // Привітання
    cout << "Привіт, " << name << "!" << endl;

    // Запитуємо вік користувача
    int age;
    cout << "Скільки вам років? ";
    cin >> age;

    // Обчислюємо рік народження
    int currentYear = 2023; // Поточний рік
    int birthYear = currentYear - age;

    // Виводимо рік народження
    cout << "Ви народилися в " << birthYear << " році." << endl;

    return 0;
}
