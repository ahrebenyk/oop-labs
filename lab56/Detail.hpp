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
  ~Detail();
  string getFullDescription() const;
  void setType(int);
  string getType() const;
  void setManufacturer(const string&);
  string getManufacturer() const;
  void setSerialNumber(const string&);
  string getSerialNumber() const;
  friend ostream& operator << (ostream& out, const Detail& d);
  void operator = (const string&);
  bool operator == (const Detail&) const;
};
