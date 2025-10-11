#include "Detail.hpp"
#include <iostream>

const string DEFAULT_MANUFACTURER = "NONAME";
const string DEFAULT_SERIAL_NUMBER = "000000";

Detail::Detail() {
  manufacturer = DEFAULT_MANUFACTURER;
  serialNumber = DEFAULT_SERIAL_NUMBER;
  type = DetailType::UNKNOWN;
}

Detail::Detail(int type, const string& manufacturer, const string& serialNumber) {
  this->type = static_cast<DetailType>(type);
  this->manufacturer = manufacturer;
  this->serialNumber = serialNumber;
}

Detail::Detail(const Detail& source)  {
  type = source.type;
  manufacturer = source.manufacturer;
  serialNumber = source.serialNumber;
}

void Detail::setManufacturer(const string& detailManufacturer) {
  manufacturer = detailManufacturer;
}

string Detail::getManufacturer() const {
  return manufacturer;
}

void Detail::setSerialNumber(const string& detailSerialNumber) {
  serialNumber = detailSerialNumber;
}

string Detail::getSerialNumber() const {
  return serialNumber;
}

void Detail::setType(int detailType) {
  type = static_cast<DetailType>(detailType);
}

string Detail::getType() const {
  if (type == DetailType::RESISTOR) {
    return "Resistor";
  }
  if (type == DetailType::DIODE) {
    return "Diode";
  }
  if (type == DetailType::CAPACITOR) {
    return "Capacitor";
  }
  if (type == DetailType::INDUCTOR) {
    return "Inductor";
  }

  return "Unknown";
}

ostream& operator << (ostream& out, const Detail& d) {
  return out << "Manufacturer: " + d.manufacturer + "\nSerial number: " + d.serialNumber + "\nType: " + d.getType() + "\n";;
}


