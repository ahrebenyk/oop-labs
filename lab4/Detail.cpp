#include "Detail.hpp"
#include <ostream>
#include <iostream>

Detail::Detail() {
  manufacturer = DEFAULT_MANUFACTURER;
  serialNumber = DEFAULT_SERIAL_NUMBER;
  type = UNKNOWN;
}

Detail::Detail(int detailType) {
  manufacturer = DEFAULT_MANUFACTURER;
  serialNumber = DEFAULT_SERIAL_NUMBER;
  type = static_cast<DetailType>(detailType);
}

Detail::Detail(int detailType, const string& detailManufacturer, const string& detailSerialNumber) {
  type = static_cast<DetailType>(detailType);
  manufacturer = detailManufacturer;
  serialNumber = detailSerialNumber;
}

Detail::Detail(const Detail& source)  {
  type = source.type;
  manufacturer = source.manufacturer;
  serialNumber = source.serialNumber;
}

Detail::~Detail()  {
  cout << "call destructor" << endl;
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

