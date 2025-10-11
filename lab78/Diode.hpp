#include <string>
#include "Detail.hpp"

using namespace std;

class Diode : public Detail {
  float forwardVoltage;
  float reverseVoltage;
  float power;
  using Detail::setType;

public:
  Diode();
  Diode(const string&, const string&, float, float, float);
  Diode(const Diode&);
  void setForwardVoltage(float);
  float getForwardVoltage() const;
  void setReverseVoltage(float);
  float getReverseVoltage() const;
  void setPower(float);
  float getPower() const;
  friend ostream& operator << (ostream& out, const Diode& d);
};
