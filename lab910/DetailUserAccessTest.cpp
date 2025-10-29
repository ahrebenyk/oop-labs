#include <string>
#include "Detail.hpp"
#include "Roles.cpp"

using namespace std;

int main() {
    Detail detail(2, "Voltage: 1000V", 100);

    User user;
    user.getInfo(detail);

    Manager manager;
    manager.setDescription(detail,"Voltage: 200V");
    manager.getInfo(detail);

    Admin admin;
    admin.setDescription(detail,"Voltage: 200V");
    admin.setPrice(detail, 340);
    admin.getInfo(detail);
}
