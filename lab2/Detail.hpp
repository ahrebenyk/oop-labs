#include <string>

using namespace std;

enum DetailType {UNKNOWN, RESISTOR, DIODE, INDUCTOR, CAPACITOR };

class Detail {
  DetailType type;
  string manufacturer;
  string serialNumber;

public:
  void init();
  string getFullDescription();
  void setType(int);
  string getType();
  void setManufacturer(string&);
  string getManufacturer();
  void setSerialNumber(string&);
  string getSerialNumber();
};
