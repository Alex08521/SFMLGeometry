#include <Windows.h>
#include "CustomTriangle.h"
#include "CustomCircle.h"
#include "CustomRectangle.h"
#include "CustomSquare.h"

int main()
{
    CustomCircle circle;
    CustomRectangle rect;
    CustomSquare square;
    CustomTriangle trian;

    circle.genShape();
    rect.genShape();
    square.genShape();
    trian.genShape();
    system("pause");

    return 0;
}