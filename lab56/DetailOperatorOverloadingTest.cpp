#include <iostream>
#include <string>
#include "Detail.hpp"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Detail detail(1, "test", "test");
    //Оператор << дозволяє виводити об'єкт в cout";
    cout << "Початковий об'єкт detail:\n" << detail;

    //Оператор = задає значення поля type;
    detail = 2;
    //Оператор + задає значення поля manufacturer;
    detail + "intel";
    //Оператор += задає значення поля serial number;
    detail += "19287313";

    cout << "Об'єкт detail після виклику операторів:\n" << detail;
}
