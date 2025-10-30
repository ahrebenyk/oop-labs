#include <cmath>

class Function {
public:
    virtual ~Function() = default;
    virtual double value(double x) = 0;
};

class LinearFunction : public Function {
public:
    double value(double x) override {
        return 10 * x;
    }
};

class QuadraticFunction : public Function {
public:
    double value(double x) override {
        return x * x;
    }
};

class AbsFunction : public Function {
public:
    double value(double x) override {
        return std::abs(x);
    }
};
