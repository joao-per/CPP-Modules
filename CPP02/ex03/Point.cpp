#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(const Point& src) : x(src.x), y(src.y) {}

Point& Point::operator=(const Point& rhs) {
    // Const members cannot be modified after construction.
    // So we can't really "assign" to them in the traditional sense.
    // Generally, you'd throw an exception or handle the case in a way appropriate to your application
    (void)rhs;  // Unused
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
