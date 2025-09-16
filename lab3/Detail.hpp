#include <string>

using namespace std;

const string DEFAULT_MANUFACTURER = "NONAME";
const string DEFAULT_SERIAL_NUMBER = "000000";

enum DetailType {UNKNOWN, RESISTOR, DIODE, INDUCTOR, CAPACITOR };

class Detail {
  DetailType type;
  string manufacturer;
  string serialNumber;

public:
  Detail();
  Detail(int);
  Detail(int, const string&, const string&);
  Detail(const Detail&);
  string getFullDescription();
  void setType(int);
  string getType();
  void setManufacturer(string&);
  string getManufacturer();
  void setSerialNumber(string&);
  string getSerialNumber();
};
