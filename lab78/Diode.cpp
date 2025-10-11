#include "Diode.hpp"
#include <iostream>

Diode::Diode() {
  type = DetailType::DIODE;
  forwardVoltage = 0;
  reverseVoltage = 0;
  power = 0;
}

Diode::Diode(const string& manufacturer,
             const string& serialNumber,
             const float forwardVoltage,
             const float reverseVoltage,
             const float power) {
  type = DetailType::DIODE;
  this->manufacturer = manufacturer;
  this->serialNumber = serialNumber;
  this->forwardVoltage = forwardVoltage;
  this->reverseVoltage = reverseVoltage;
  this->power = power;
}

Diode::Diode(const Diode& source) : Detail(source) {
  forwardVoltage = source.forwardVoltage;
  reverseVoltage = source.reverseVoltage;
  power = source.power;
}

void Diode::setForwardVoltage(const float forwardVoltage) {
  this->forwardVoltage = forwardVoltage;
}

float Diode::getForwardVoltage() const {
  return forwardVoltage;
}

void Diode::setReverseVoltage(const float reverseVoltage) {
  this->reverseVoltage = reverseVoltage;
}

float Diode::getReverseVoltage() const {
  return reverseVoltage;
}

void Diode::setPower(const float power) {
  this->power = power;
}

float Diode::getPower() const {
  return power;
}

ostream& operator << (ostream& out, const Diode& d) {
  return out <<
         "Type: " + d.getType() + "\n" +
         "Manufacturer: " + d.getManufacturer() + "\n" +
         "Serial number: " + d.getSerialNumber() + "\n" +
         "Forward voltage: " + to_string(d.getForwardVoltage()) + "\n" +
         "Reverse voltage: " + to_string(d.getReverseVoltage()) + "\n" +
         "Power: " + to_string(d.getPower()) + "\n";
}

