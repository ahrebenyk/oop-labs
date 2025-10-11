#include <string>
#include "Detail.hpp"

using namespace std;

class Resistor : public Detail {
  float resistance;
  float power;
  using Detail::setType;

public:
  Resistor();
  Resistor(const string&, const string&, float, float);
  Resistor(const Resistor&);
  void setResistance(float);
  float getResistance() const;
  void setPower(float);
  float getPower() const;
  friend ostream& operator << (ostream& out, const Resistor& d);
};
