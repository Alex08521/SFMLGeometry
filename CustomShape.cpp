#include "CustomShape.h"

CustomShape::CustomShape()
{
	for (int y = 0; y < 30; y++)
	{
		for (int x = 0; x < 30; x++)
		{
			field[y][x] = ' ';
		}
	}
	basex = 0;
	basey = 0;
}

void CustomShape::draw()
{
	for (int y = 0; y < 30; y++)
	{
		for (int x = 0; x < 30; x++)
		{
			cout << field[y][x] << ' ';
		}
		cout << endl;
	}
}
