#include <iostream>
#include <string>
#include "Detail.hpp"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Detail detail1(1);
    cout << "Об'єкт створений конструктором Detail(int):\n" <<  detail1.getFullDescription();

    Detail detail2(2, "Intel", "923410293");
    cout << "Об'єкт створений конструктором Detail(int, const string&, const string&):\n" <<  detail2.getFullDescription();

    Detail detail3(detail2);
    cout << "Об'єкт створений конструктором копіювання Detail(const Detail&):\n" <<  detail2.getFullDescription();
}
