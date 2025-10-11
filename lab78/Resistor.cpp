#include "Resistor.hpp"
#include <iostream>

Resistor::Resistor() {
  type = DetailType::RESISTOR;
  resistance = 0;
  power = 0;
}

Resistor::Resistor(const string& manufacturer,
                   const string& serialNumber,
                   const float resistance,
                   const float power) {
  type = DetailType::RESISTOR;
  this->manufacturer = manufacturer;
  this->serialNumber = serialNumber;
  this->resistance = resistance;
  this->power = power;
}

Resistor::Resistor(const Resistor& source) : Detail(source) {
  resistance = source.resistance;
  power = source.power;
}

void Resistor::setResistance(const float resistance) {
  this->resistance = resistance;
}

float Resistor::getResistance() const {
  return resistance;
}

void Resistor::setPower(const float power) {
  this->power = power;
}

float Resistor::getPower() const {
  return power;
}

ostream& operator << (ostream& out, const Resistor& d) {
  return out <<
         "Type: " + d.getType() + "\n" +
         "Manufacturer: " + d.getManufacturer() + "\n" +
         "Serial number: " + d.getSerialNumber() + "\n" +
         "Resistance: " + to_string(d.getResistance()) + "\n" +
         "Power: " + to_string(d.getPower()) + "\n";
}

