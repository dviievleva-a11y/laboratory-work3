#include <iostream>
#include <cmath>
using namespace std;

/* ===== ЗАВДАННЯ 1 (If6) ===== */
void taskIf6()
{
    cout << "\n--- Завдання 1 (If6) ---\n";

    double a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    if (a > b)
        cout << "Більше число: " << a << endl;
    else
        cout << "Більше число: " << b << endl;
}

/* ===== ЗАВДАННЯ 2 (варіант 35) ===== */
void taskVariant35()
{
    cout << "\n--- Завдання 2 (Варіант 35) ---\n";

    double x, y, r;
    cout << "Введіть x, y: ";
    cin >> x >> y;
    cout << "Введіть r: ";
    cin >> r;

    bool inArea =
        (x - r)*(x - r) + (y - r)*(y - r) <= r*r &&
        x <= r &&
        y >= r;

    if (inArea)
        cout << "Точка НАЛЕЖИТЬ заштрихованій області\n";
    else
        cout << "Точка НЕ належить заштрихованій області\n";
}

/* ===== МЕНЮ ===== */
int main()
{
    int choice;

    do
    {
        cout << "\n===== МЕНЮ =====\n";
        cout << "1 - Завдання 1 (If6)\n";
        cout << "2 - Завдання 2 (Варіант 35)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice)
        {
            case 1: taskIf6(); break;
            case 2: taskVariant35(); break;
            case 0: cout << "Завершення програми.\n"; break;
            default: cout << "Невірний вибір!\n";
        }
    }
    while (choice != 0);

    return 0;
}
