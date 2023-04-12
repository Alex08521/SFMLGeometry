#include "CustomRectangle.h"

CustomRectangle::CustomRectangle()
{
	basex = 15;
	basey = 15;
	sideA = 20;
	sideB = 10;
}

void CustomRectangle::genShape()
{
    for (int i = 0; i <= sideA / 2; i++)
    {
        field[basey + sideB / 2][basex + i] = '@';
        field[basey + sideB / 2][basex - i] = '@';
        field[basey - sideB / 2][basex + i] = '@';
        field[basey - sideB / 2][basex - i] = '@';
    }
    for (int i = 0; i < sideB / 2; i++)
    {
        field[basey + i][basex + sideA / 2] = '@';
        field[basey - i][basex + sideA / 2] = '@';
        field[basey + i][basex - sideA / 2] = '@';
        field[basey - i][basex - sideA / 2] = '@';
    }
    draw();
}
