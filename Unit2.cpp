//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit2.h"
MyPoint::MyPoint()
{
x=0;
y=0;
}
MyPoint::MyPoint(int i, int j)
{
x=x0=i;
y=y0=j;
}
int MyPoint::get_x()
{
return x;
}
int MyPoint::get_y()
{
return y;
}
void MyPoint::set_x(int a)
{
x=a;
}
void MyPoint::set_y(int a)
{
y=a;
}
void MyPoint::set_x()
{
x=x0;
}
void MyPoint::set_y()
{
y=y0;
}
 MyPoint:: ~MyPoint(){}//---------------------------------------------------------------------------

#pragma package(smart_init)

