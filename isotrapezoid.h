/*! \file isotrapezoid.h
	\brief Declaration of the general class isotrapezoid

	Details.
*/
#include "polygon.h"

/// @class isotrapezoid
/// @brief an abstract base class for polygons

class isotrapezoid : public Polygon{

protected:
    float perimeter;
    float area;
    float Base1;
    float Base2;
    float Height;

    float Area()=0;
    float Perimeter()=0;

public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    isotrapezoid();
    isotrapezoid(const isotrapezoid &i);
    virtual ~isotrapezoid();
    /// @}

    /// @name OPERATORS
    /// @{
    isotrapezoid& operator=(const isotrapezoid &i);
    bool operator==(const isotrapezoid &i);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const isotrapezoid &r);
    void Reset();
    /// @}

    /// @name GETTERS
    /// @{
    float GetBase1();
    float GetBase2();
    float GetHeight();
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    void Dump();
    /// @}
};
