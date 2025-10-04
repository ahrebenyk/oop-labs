#include <iostream>
#include <string>
#include "Detail.hpp"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Detail detail1(1, "test", "test");
    Detail detail2(1, "test", "test");

    //Оператор << дозволяє виводити об'єкт в cout";
    cout << "detail1:\n" << detail1;

    //Оператор == перевіряє рівність об'єктів за їх серійним номером;
    cout << boolalpha;
    cout << "detail1 == detail2 : " << (detail1 == detail2) << endl;

    //Оператор = задає серійний номер;
    detail1 = "9182372";
    cout << "detail1 після виклику оператора =\n" << detail1;

    cout << "detail1 == detail2 : " << (detail1 == detail2) << endl;
}
