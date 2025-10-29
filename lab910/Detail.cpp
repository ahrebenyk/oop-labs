#include "Detail.hpp"
#include <iostream>

Detail::Detail() {
  description = "NO DESCRIPTION";
  type = DetailType::UNKNOWN;
  price = 0;
}

Detail::Detail(int type, const string& description, int const price) {
  this->type = static_cast<DetailType>(type);
  this->description = description;
  this->price = price;
}

void Detail::setDescription(const string& description) {
  this->description = description;
}

string Detail::getDescription() const {
  return description;
}

void Detail::setPrice(int price) {
  this->price = price;
}

int Detail::getPrice() const {
  return price;
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
  return out << "Price: " + to_string(d.price) + "\nInfo: " + d.description + "\nType: " + d.getType() + "\n";;
}


