#pragma once
#include "CustomShape.h"

class CustomTriangle :
    public CustomShape
{
private:
    int downWidth;
public:
    CustomTriangle();
    void genShape();
};

