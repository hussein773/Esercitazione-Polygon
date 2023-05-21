#include "isotrapezoid.h"
#include <cmath>

/// @brief default constructor
isotrapezoid::isotrapezoid() {

    cout << "isotrapezoid - constructor - default" << endl;

    Init();

}

/// @brief constructor
isotrapezoid::isotrapezoid(float b1, float b2, float h) {

    cout << "isotrapezoid - constructor" << endl;

    if (b1 <= 0.)
        cout << "WARNING: isotrapezoid - constructor: Bottom Side value should be > 0" << endl;
    else
        Base1 = b1;

    if (b2 <= 0.)
        cout << "WARNING: isotrapezoid - constructor: Top Side value should be > 0" << endl;
    else
        Base2 = b2;

    if (h <= 0.)
        cout << "WARNING: isotrapezoid - constructor: Height value should be > 0" << endl;
    else
        Height = h;

    if (b1 < b2)
        cout << "WARNING: isotrapezoid - constructor: Bottom Side should be greater than Top Side" << endl;
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
    Base2 = i.Base2;
    Height = i.Height;
}

/// @brief total reset of the object
void isotrapezoid::Reset() {
    Base1 = 0.;
    Base2 = 0.;
    Height = 0.;
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
bool isotrapezoid::operator==(const isotrapezoid &i) const {
    cout <<"isotrapezoid - operator ==" << endl;

    if (i.Base1 == Base1 && i.Base2 == Base2 && i.Height == Height)
        return true;
    return false;
}

/// @brief Area of the object
/// @{
float isotrapezoid::Area(){
    return (Base1 + Base2) * Height / 2;
}
/// @}

/// @brief perimeter of the object
/// @{
float isotrapezoid::Perimeter(){
    return (Base1 + Base2) + 2 * GetSide();
}
/// @}

/// @brief set Base1 of the object
/// @param b1 Base1
void isotrapezoid::SetBase1(float b1) {

    if (b1 < 0.) {
        cout << "WARNING: isotrapezoid - SetBase1: Base1 should be > 0" << endl;
        return;
    }
    if (b1 < isotrapezoid::Base2) {
        cout <<"WARNING: isotrapezoid - SetBase2: Base2 (Top Side) should be < than Base1 (Bottom Side)" << endl;
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
    if (b2 > isotrapezoid::Base1) {
        cout <<"WARNING: isotrapezoid - SetBase2: Base2 (Top Side) should be < than Base1 (Bottom Side)" << endl;
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
/// @param b1 Base1 (Bottom Side)
/// @param b2 Base2 (Top Side)
///@param h height
void isotrapezoid::SetDim(float b1, float b2, float h) {

    SetBase1(b1);
    SetBase2(b2);
    SetHeight(h);
}

/// @brief get the perimeter of the object
/// @return perimeter of the isotrapezoid
float isotrapezoid::GetPerimeter() {

    return Perimeter();

}

/// @brief get the area of the object
/// @return area of the isotrapezoid
float isotrapezoid::GetArea() {

    return Area();
}

/// @brief get Base1 (Bottom Side) of the object
/// @return Base1 (Bottom Side)
float isotrapezoid::GetBase1() {

    return Base1;
}

/// @brief get Base2 (Top Side) of the object
/// @return Base2 (Top Side)
float isotrapezoid::GetBase2() {

    return Base2;
}

/// @brief get Height of the object
/// @return Height
float isotrapezoid::GetHeight() {

    return Height;
}

/// @brief get Side of the object
/// @return Side
float isotrapezoid::GetSide() {
    Side = sqrt(powf((Base1 - Base2)/2, 2.0) + powf(Height, 2.0));
    return Side;
}

/// @brief draw the object
void isotrapezoid::Draw(){
    cout << "drawing isotrapezoid: " << endl;
    cout << "Top Side = " << GetBase2() << endl;
    cout << "Bottom Side = " << GetBase1() << endl;
    cout << "Diagonal Side = " << GetSide() << endl;
    cout << "Area = " << GetArea() << endl;
    cout << "Perimeter = " << GetPerimeter() << endl;
    cout << endl;
}

/// @bref function to check if the bottom side is larger than the top side
bool isotrapezoid::ErrorDim(){
    if (Base2 > Base1){
        return true;
    }
    return false;
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

/// @brief write an error message
/// @param string message to be printed
    void isotrapezoid::ErrorMessage(const char *string) {

        cout << endl << "ERROR -- isotrapezoid --";
        cout << string << endl;

    }

/// @brief write a warning message
/// @param string message to be printed
    void isotrapezoid::WarningMessage(const char *string) {

        cout << endl << "WARNING -- isotrapezoid --";
        cout << string << endl;

}

