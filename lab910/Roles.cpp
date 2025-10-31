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
    std::string name;
public:
    User() : name("UnknownUser") {}
    User(const string& name) : name(name) {}
    User(const User& other) : name(other.name) {}
};

class Manager : public ReadAccess, public EditDescriptionAccess {
    string name;
public:
    Manager() : name("UnknownManager") {}
    Manager(const string& name) : name(name) {}
    Manager(const Manager& other) : name(other.name) {}
};

class Admin : public ReadAccess, public EditDescriptionAccess, public EditPriceAccess{
    string name;
public:
    Admin() : name("UnknownAdmin") {}
    Admin(const string& name) : name(name) {}
    Admin(const Admin& other) : name(other.name) {}
};
