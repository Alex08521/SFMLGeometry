#pragma once
#include <iostream>

using namespace std;

class CustomShape
{
public:
    int basex;
    int basey;
    char field[30][30];
    CustomShape();
    void draw();
    virtual void genShape() = 0;
};

