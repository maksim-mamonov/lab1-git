// Лабораторная работа № 1. Вариант 38.
// Выполнил: Мамонов М.В., группа ПИ-51.
// Вторая копия задания

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
        cout << "\n*** Калькулятор. Вариант 38 ***\n";
        cout << "\n--- Программа расчетов. Вариант 38 ---\n";
        cout << "1. Работа тока\n";
        cout << "2. Количество теплоты (закон Джоуля — Ленца)\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";

        // Проверка корректности ввода пункта меню
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ошибка: введите цифру от 0 до 2!\n";
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Введите U (В), I (А), t (с): ";
                if (!(cin >> U >> I >> t) || t < 0) {
                    cout << "Ошибка! Значения должны быть числами, а время t >= 0.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    cout << "Работа тока = " << currentWork(U, I, t) << " Дж\n";
                }
                break;
            case 2:
                cout << "Введите I (А), R (Ом), t (с): ";
                if (!(cin >> I >> R >> t) || R < 0 || t < 0) {
                    cout << "Ошибка! Значения должны быть числами, а R и t не могут быть отрицательными.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    cout << "Количество теплоты = " << jouleHeat(I, R, t) << " Дж\n";
                }
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
