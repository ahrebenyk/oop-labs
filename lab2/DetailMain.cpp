#include <iostream>
#include <string>
#include "Detail.hpp"

using namespace std;

void printInstruction() {
    cout << endl
    << "Select action:" << endl
    << "1 - get manufacturer" << endl
    << "2 - set manufacturer" << endl
    << "3 - get serial number" << endl
    << "4 - set serial number" << endl
    << "5 - get type" << endl
    << "6 - set type" << endl
    << "7 - print description" << endl
    << "0 - exit" << endl;
}

void printSelectTypeInstruction() {
    cout << endl
    << "Select type:" << endl
    << "0 - unknown" << endl
    << "1 - resistor" << endl
    << "2 - diode" << endl
    << "3 - inductor" << endl
    << "4 - capacitor" << endl;
}

int main() {
    printInstruction();

    Detail detail;
    detail.init();

    char key;

    do {
        cin >> key;
        switch (key) {
            case '1': {
                cout << "Manufacturer: " << detail.getManufacturer();
                break;
            }
            case '2': {
                string manufacturer;
                cout << "enter manufacturer" << endl;
                cin >> manufacturer;
                detail.setManufacturer(manufacturer);
                cout << detail.getFullDescription();
                break;
            }
            case '3': {
                cout << "Serial number: " << detail.getSerialNumber();
                break;
            }
            case '4': {
                string serialNumber;
                cout << "enter serial number" << endl;
                cin >> serialNumber;
                detail.setSerialNumber(serialNumber);
                cout << detail.getFullDescription();
                break;
            }
            case '5': {
                cout << "Type: " << detail.getType();
                break;
            }
            case '6': {
                int type;
                printSelectTypeInstruction();
                cin >> type;
                detail.setType(type);
                cout << detail.getFullDescription();
                break;
            }
            case '7': {
                cout << "Detail description:\n" << detail.getFullDescription();
                break;
            }
            case '0': {
                cout << "Program exit";
                return 0;
            }
            default: {
                cout << "incorrect input" << endl;
            }
        }
        printInstruction();
    } while (true);
}
