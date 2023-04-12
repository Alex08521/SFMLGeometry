#pragma once
#include "CustomShape.h"

class CustomSquare :
    public CustomShape
{
private:
    int side;
public:
    CustomSquare();
    void genShape();
};

