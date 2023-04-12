#include "CustomTriangle.h"

CustomTriangle::CustomTriangle()
{
    basex = 15;
    basey = 15;
    downWidth = 16;
}

void CustomTriangle::genShape()
{
    int angleA;
    int angleB;
    for (int i = 0; i < downWidth / 2; i++)
    {
        field[basey][basex + i] = '@';
        field[basey][basex - i] = '@';
        angleA = basex + i;
        angleB = basex - i;
    }
    int a = 0;

    while ((angleA - a) != (angleB + a))
    {
        field[basey - a][angleA - a] = '@';
        field[basey - a][angleB + a] = '@';
        a++;
    }
    field[basey - a][angleA - a] = '@';
    draw();
}
