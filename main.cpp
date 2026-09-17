// Лабораторная работа № 1. Вариант 38.
// Выполнил: Мамонов М.В., группа ПИ-51.

#include <iostream>
#include <cmath>

using namespace std;

// ===== Расчётные функции варианта =====

// Работа тока (U — напряжение, I — сила тока, t — время)
double currentWork(double U, double I, double t) {
    return U * I * t;
}

// Количество теплоты (закон Джоуля — Ленца: I — сила тока, R — сопротивление, t — время)
double jouleHeat(double I, double R, double t) {
    return I * I * R * t;
}

// ===== Главная функция: меню =====

int main() {

    int choice;
    double U, I, R, t;

    do {
        cout << "\n=== Вариант 38: работа и теплота тока ===\n";
        cout << "1. Работа тока\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите U, I, t: ";
                cin >> U >> I >> t;
                cout << "Работа тока = " << currentWork(U, I, t) << "\n";
                break;
            case 2:
                cout << "Введите I, R, t: ";
                cin >> I >> R >> t;
                cout << "Количество теплоты = " << jouleHeat(I, R, t) << "\n";
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
