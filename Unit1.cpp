//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//Шестиугольник. Сделать вращение, масштабирование, перемещение

MyPoint hexagon[7];
hexagon[0].set_x(200);

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Form1Create(TObject *Sender)
{
  //Отрисовка
double r[3][3];
int angle=60;
 r[0][0]=cos(angle*3.14/180);
 r[0][1]=sin(angle*3.14/180);
 r[0][2]=0;
 r[1][0]=-sin(angle*3.14/180);
 r[1][1]=cos(angle*3.14/180);
 r[1][2]=0;
 r[2][0]=0;
 r[2][1]=0;
 r[2][2]=1;
 //int x, y;
 //hex.getpoint0(x,y);
 

int v1[3];
hexagon.getpoint1(v1[0], v1[1]);
v1[2]=1;
int v2[3]={0, 0, 1};
int k=6;
int i, j;
while(k--)
{
for (i = 0;i < 3;i++)
{
        double sum = 0;
        for (j = 0;j < 3;j++)
        {
                sum= sum+ (r[j][i] * v1[j]);
        }

        v2[i] = sum;
}
Image1->Canvas->MoveTo(v1[0],v1[1]);
Image1->Canvas->LineTo(v2[0],v2[1]);
v1[0]=v2[0];
v1[1]=v2[1];
v2[0]=0;
v2[1]=0;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
LabeledEdit1->Text=IntToStr(X)+", " + IntToStr(Y);
}
//---------------------------------------------------------------------------

