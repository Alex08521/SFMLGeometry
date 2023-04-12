#pragma once
#include "CustomShape.h"

class CustomRectangle :
    public CustomShape
{
private:
    int sideA;
    int sideB;
public:
    CustomRectangle();
    void genShape();
};

