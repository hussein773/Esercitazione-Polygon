#include "isotrapezoid.h"
#include <cmath>

/// @brief default constructor
isotrapezoid::isotrapezoid() {

    cout << "isotrapezoid - constructor - default" << endl;

    init();

}

/// @brief constructor
isotrapezoid::isotrapezoid(float b1, float b2, float h) {

    cout << "isotrapezoid - constructor" << endl;

    if (b1 <= 0.)
        cout << "WARNING: isotrapezoid - constructor: Base_1 value should be > 0" << endl;
    else
        Base1 = b1;

    if (b2 <= 0.)
        cout << "WARNING: isotrapezoid - constructor: Base_2 value should be > 0" << endl;
    else
        Base2 = b2;

    if (h <= 0.)
        cout << "WARNING: isotrapezoid - constructor: Height value should be > 0" << endl;
    else
        Height = h;

    if (b1 < b2)
        cout << "WARNING: isotrapezoid - constructor: b1 should be greater than b1" << endl;

}

/// @brief destructor
isotrapezoid::~isotrapezoid() {

    cout << "isotrapezoid - destructor" << endl;
    Reset();

}

/// @brief default initialization of the object
void isotrapezoid::Init() {
    Reset();
    Base1 = 0.;
    Base2 = 0.;
    Height = 0.;
}

/// @brief initialization with parameter of the object
void isotrapezoid::Init(const isotrapezoid &i) {
    Reset();
    Base1 = i.Base1;
    Base2 = i.base2;
    Height = i.Height;
}

/// @brief total reset of the object
void isotrapezoid::Reset() {
    width = 0.;
    length = 0.;
}

/// @brief overload of operator =
/// @param i reference to the object on the right side of the operator
/// @return reference to the object on the left side of the operator
isotrapezoid& isotrapezoid::operator=(const isotrapezoid &i) {

    cout <<"isotrapezoid - operator =" << endl;

    Base1 = i.Base1;
    Base2 = i.Base2;
    Height = i.Height;
    return *this;

}

/// @brief overload of operator ==
/// @param i reference to the object on the right side of the operator
/// @return true if the two objects have the same bases and the same height
bool isotrapezoid::operator==(const isotrapezoid &i) {
    cout <<"isotrapezoid - operator ==" << endl;

    (i.Base1 == Base1 && i.Base2 == Base2)? return true : return false;

}

/// @brief set Base1 of the object
/// @param b1 Base1
void isotrapezoid::SetBase1(float b1) {

    if (b1 < 0.) {
        cout << "WARNING: isotrapezoid - SetBase1: Base1 should be > 0" << endl;
        return;
    }
    if (b1 < b2) {
        cout <<"WARNING: isotrapezoid - SetBase1: Base1 should be greater than Base_2" << endl;
        return;
    }

    Base1 = b1;

}

/// @brief set Base2 of the object
/// @param b2 Base2
void isotrapezoid::SetBase2(float b2) {

    if (b2 < 0.) {
        cout << "WARNING: isotrapezoid - SetBase2: Base2 should be > 0" << endl;
        return;
    }
    if (b2 > b1) {
        cout <<"WARNING: isotrapezoid - SetBase2: Base2 should be < than Base_1" << endl;
        return;
    }

    Base2 = b2;

}

/// @brief set Height of the object
/// @param h Height
void isotrapezoid::SetHeight(float h) {

    if (h < 0.) {
        cout << "WARNING: isotrapezoid - SetHeight: Height should be > 0" << endl;
        return;
    }

    Height = h;

}

/// @brief set dimensions of the object
/// @param b1 Base1
/// @param b2 Base2
///@param h height
void isotrapezoid::SetDim(float b1, float b2, float h) {

    SetBase1(b1);
    SetBase2(b2);
    SetHeight(h);
}

/// @brief get the perimeter of the object
/// @return perimeter of the isotrapezoid
float isotrapezoid::GetPerimeter() {

    return (Base1 + Base2) + 2 * sqrt(powf(Base1 - Base2, 2.0) + powf(Height, 2.0));

}

/// @brief get the area of the object
/// @return area of the isotrapezoid
float isotrapezoid::GetArea() {

    return (Base1 * Base2) * H / 2;

}

/// @brief get Base1 of the object
/// @return Base1
float isotrapezoid::GetBase1() {

    return Base1;
}

/// @brief get Base2 of the object
/// @return Base2
float isotrapezoid::GetBase2() {

    return Base2;
}

/// @brief get Height of the object
/// @return Height
float isotrapezoid::GetHeight() {

    return Height;
}

/// @brief for debugging: all about the object
void isotrapezoid::Dump() {
    cout << endl;
    cout << "---isotrapezoid---" << endl;
    cout << endl;

    cout << "Base1 = " << Base1 << endl;
    cout << "Base2 = " << Base2 << endl;
    cout << "Height = " << Height << endl;
    cout << "Perimeter = " << GetPerimeter() << endl;
    cout << "Area = " << GetArea() << endl;
    cout << endl;

}
