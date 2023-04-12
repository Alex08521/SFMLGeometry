#include "CustomSquare.h"

CustomSquare::CustomSquare()
{
	basex = 15;
	basey = 15;
	side = 16;
}

void CustomSquare::genShape()
{
    for (int i = 0; i <= side / 2; i++)
    {
        field[basey + side / 2][basex + i] = '@';
        field[basey + side / 2][basex - i] = '@';
        field[basey - side / 2][basex + i] = '@';
        field[basey - side / 2][basex - i] = '@';
        field[basey + i][basex + side / 2] = '@';
        field[basey - i][basex + side / 2] = '@';
        field[basey + i][basex - side / 2] = '@';
        field[basey - i][basex - side / 2] = '@';
    }
    draw();
}
