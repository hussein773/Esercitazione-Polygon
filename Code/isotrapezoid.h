/*! \file isotrapezoid.h
	\brief Declaration of the general class isotrapezoid

	Details.
*/

#ifndef ISOTRAPEZOID_H
#define ISOTRAPEZOID_H
#include "polygon.h"

using namespace std;

/// @class isotrapezoid
/// @brief derived class

class isotrapezoid : public Polygon{

private:
    float Base1;
    float Base2;
    float Height;
    float Side;

    float Area();
    float Perimeter();

public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    isotrapezoid();
    isotrapezoid(float b1, float b2, float h);
    virtual ~isotrapezoid();
    /// @}

    /// @name OPERATORS
    /// @{
    isotrapezoid& operator=(const isotrapezoid &i) ;
    bool operator==(const isotrapezoid &i) const;
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const isotrapezoid &i);
    void Reset();
    /// @}

    /// @name GETTERS
    /// @{
    float GetDim();
    float GetBase1();
    float GetBase2();
    float GetHeight();
    float GetSide();
    float GetPerimeter();
    float GetArea();
    /// @}

    /// @name SETTERS
    /// @{
    void SetDim(float b1, float b2, float h);
    void SetBase1(float b1);
    void SetBase2(float b2);
    void SetHeight(float h);
    ///@}

    /// @name DRAWING
    /// @{
    void Draw();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    bool ErrorDim();
    void ErrorMessage(const char *string);
    void WarningMessage(const char *string);
    void Dump();
    /// @}
};
#endif
