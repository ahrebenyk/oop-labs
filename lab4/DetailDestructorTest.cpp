#include <iostream>
#include <string>
#include "Detail.hpp"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Detail detail1(2, "Intel", "923410293");
    Detail detail2(2, "Amd", "39472938");
    cout << "Об'єкт Detail:\n" <<  detail1.getFullDescription();
    cout << "Об'єкт Detail:\n" <<  detail2.getFullDescription();
}
