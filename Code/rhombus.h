/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "polygon.h"

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus : public Polygon
{
private:
    float diagH;
    float diagV;
    float Side();

    float Area();
    float Perimeter();
public:

    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    Rhombus();
    Rhombus(float dH, float dV);
    Rhombus(const Rhombus &r);

    ~Rhombus();
    /// @}

    /// @name OPERATORS
    /// @{
    Rhombus& operator=(const Rhombus &r);
    bool operator==(const Rhombus &r) const;
    friend ostream& operator<<(ostream& os, const Rhombus& r);
    friend istream& operator>>(istream& is, const Rhombus& r);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Rhombus &r);
    void Reset();
    /// @}

    /// @name GETTERS
    /// @{
    void GetDiagonals(float &dH, float &dV);
    void GetDim(float &dH, float &dV);
    float GetDiagH();
    float GetDiagV();
    float GetSide();
    float GetArea();
    float GetPerimeter();
    /// @}

    /// @name SETTERS
    /// @{
    void SetDim(float dH, float dV);
    void SetDiagH(float dH);
    void SetDiagV(float dV);
    /// @}

    /// @name DRAWING
    /// @{
    void Draw();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}

};

#endif
