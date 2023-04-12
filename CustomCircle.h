#pragma once
#include "CustomShape.h"

class CustomCircle :
    public CustomShape
{
private:
    int radius;
    int startX;
    int startY;
public:
    CustomCircle();
    void genShape();
};

