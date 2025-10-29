#pragma once
#include <string>

using namespace std;

enum class DetailType {UNKNOWN, RESISTOR, DIODE, INDUCTOR, CAPACITOR };

class Detail {

protected:
  DetailType type;
  string description;
  int price;

public:
  Detail();
  Detail(int type, const string& description, int price);
  void setType(int);
  string getType() const;
  void setDescription(const string&);
  string getDescription() const;
  void setPrice(int);
  int getPrice() const;
  friend ostream& operator << (ostream& out, const Detail& d);
};