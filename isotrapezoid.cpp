#include "isotrapezoid.h"

/// @brief default constructor
isotrapezoid::isotrapezoid() {

    cout << "isotrapezoid - constructor - default" << endl;

    area = 0.;
    perimeter = 0.;

}

/// @brief destructor
isotrapezoid::~isotrapezoid() {

    cout << "isotrapezoid - destructor" << endl;
    Reset();

}

/// @brief overload of operator =
/// @param i reference to the object on the right side of the operator
/// @return reference to the object on the left side of the operator
isotrapezoid& isotrapezoid::operator=(const isotrapezoid &i) {

    return *this;

}

/// @brief overload of operator ==
/// @param i reference to the object on the right side of the operator
/// @return true if the two objects have the same width and the same length
bool isotrapezoid::operator==(const isotrapezoid &r) {
    //if base 1a == base 2b && base 2a == base 2b && h1 == h2 TRUE
    return false;
}


