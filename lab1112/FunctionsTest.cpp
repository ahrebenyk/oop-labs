#include "Functions.cpp"
#include <iostream>

using namespace std;

int main() {
    Function *func;
    LinearFunction *linear = new LinearFunction;
    QuadraticFunction *quadratic = new QuadraticFunction;
    AbsFunction *abs = new AbsFunction;
    const double x = -1.5;
    func = linear;
    cout << "linear function value = " << func->value(x) << endl;
    func = quadratic;
    cout << "quadratic function value = " << func->value(x) << endl;
    func = abs;
    cout << "abs function value = " << func->value(x) << endl;
    delete linear;
    delete quadratic;
    delete abs;
}