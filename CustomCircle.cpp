#include "CustomCircle.h"

CustomCircle::CustomCircle()
{
    basex = 15;
    basey = 15;
    radius = 8;
    startX = 0;
    startY = radius;
}

void CustomCircle::genShape()
{
    while (startX < radius)
    {
        int d1 = ((startX + 1) * (startX + 1)) + (startY*startY) - (radius * radius);
        int d2 = ((startX + 1) * (startX + 1)) + ((startY - 1) * (startY - 1)) - (radius * radius);
        int d3 = (startX*startX) + ((startY - 1) * (startY - 1)) - (radius * radius);

        if (d2 < 0)
        {
            if ((d2 - d1) <= 0) startX++;
            else
            {
                startX++;
                startY--;
            }
        }
        else if (d2 > 0)
        {
            if ((d2 - d3) <= 0)
            {
                startX++;
                startY--;
            }
            else startY--;
        }
        else
        {
            startX++;
            startY--;
        }

        field[basey + startY][basex + startX] = '@';
        field[basey - startY][basex + startX] = '@';
        field[basey + startY][basex - startX] = '@';
        field[basey - startY][basex - startX] = '@';
    }
    draw();
}
