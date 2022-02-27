//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
class MyPoint
{
private:
int x;
int y;

int x0;
int y0;

public:

int get_x();
int get_y();
void set_x(int a);
void set_y(int a);
void set_x();
void set_y();
~MyPoint();
MyPoint(int i, int j);
 MyPoint();
} ;
//---------------------------------------------------------------------------
#endif
 