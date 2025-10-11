#include <iostream>
#include <string>
#include "Diode.hpp"
#include "Resistor.hpp"

using namespace std;

int main() {
    Diode diode1;
    cout << "Default diode:\n" << diode1 << endl;

    Diode diode2("Toshiba", "928102", 20.0, 1.0, 10.0);
    cout << "Initialized diode:\n" << diode2 << endl;

    diode2.setForwardVoltage(30.0);
    diode2.setReverseVoltage(0.1);
    diode2.setPower(50.0);
    cout << "Modified diode:\n" << diode2 << endl;

    Diode diode3(diode2);
    cout << "Copied diode:\n" << diode3 << endl;

    Resistor resistor1;
    cout << "Default resistor:\n" << resistor1 << endl;

    Resistor resistor2("Samsung", "1929301", 1.0, 10.0);
    cout << "Initialized resistor:\n" << resistor2 << endl;

    resistor2.setResistance(30.0);
    resistor2.setPower(50.0);
    cout << "Modified resistor:\n" << resistor2 << endl;

    Resistor resistor3(resistor2);
    cout << "Copied resistor:\n" << resistor3 << endl;
}
