#pragma once
#include <string>

using namespace std;

enum class DetailType {UNKNOWN, RESISTOR, DIODE, INDUCTOR, CAPACITOR };

class Detail {

protected:
  DetailType type;
  string manufacturer;
  string serialNumber;

public:
  Detail();
  Detail(int, const string&, const string&);
  Detail(const Detail&);
  void setType(int);
  string getType() const;
  void setManufacturer(const string&);
  string getManufacturer() const;
  void setSerialNumber(const string&);
  string getSerialNumber() const;
  friend ostream& operator << (ostream& out, const Detail& d);
};