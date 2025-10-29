#include <iostream>

#include "Detail.hpp"

class ReadAccess {
    public:
    void getInfo(Detail& detail) {
        cout << detail;
    }
};

class EditDescriptionAccess {
    public:
    void setDescription(Detail& detail, const string& description) {
        detail.setDescription(description);
    }
};

class EditPriceAccess {
    public:
    void setPrice(Detail& detail, int price) {
        detail.setPrice(price);
    }
};

class User : public ReadAccess {
};
class Manager : public ReadAccess, public EditDescriptionAccess{
};
class Admin : public ReadAccess, public EditDescriptionAccess, public EditPriceAccess{
};
