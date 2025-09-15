#include "Detail.hpp"
#include <ostream>

void Detail::init() {
  manufacturer = "NONAME";
  serialNumber = "000000";
  type = UNKNOWN;
}

void Detail::setManufacturer(string& detailManufacturer) {
  manufacturer = detailManufacturer;
}

string Detail::getManufacturer() {
  return manufacturer;
}

void Detail::setSerialNumber(string& detailSerialNumber) {
  serialNumber = detailSerialNumber;
}

string Detail::getSerialNumber() {
  return serialNumber;
}

void Detail::setType(int detailType) {
  type = static_cast<DetailType>(detailType);
}

string Detail::getType() {
  if (type == RESISTOR) {
    return "Resistor";
  }
  if (type == DIODE) {
    return "Diode";
  }
  if (type == CAPACITOR) {
    return "Capacitor";
  }
  if (type == INDUCTOR) {
    return "Inductor";
  }

  return "Unknown";
}

string Detail::getFullDescription() {
  return "Manufacturer: " + manufacturer + "\nSerial number: " + serialNumber + "\nType: " + getType() + "\n";
}

