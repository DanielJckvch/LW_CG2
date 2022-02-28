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
//�������������. ������� ��������, ���������������, �����������
void printhexagon(MyPoint* hexagon, TImage* Image1);
void rotandscale(TImage* Image1, double par, int sw, char a, char b, MyPoint& V);
MyPoint hexagon[7];
int x=200;
int y=200;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Form1Create(TObject *Sender)
{

int rad=100;

hexagon[0].set_x(x);
hexagon[0].set_y(y);
hexagon[1].set_x(0);
hexagon[1].set_y(rad);
printhexagon(hexagon, Image1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
LabeledEdit1->Text=IntToStr(X)+", " + IntToStr(Y);
}
//---------------------------------------------------------------------------
void printhexagon(MyPoint* hexagon, TImage* Image1)
{
  //���������
int angle=60;
double r[3][3];
 r[0][0]=cos(angle*3.14/180);
 r[0][1]=sin(angle*3.14/180);
 r[0][2]=0;
 r[1][0]=-sin(angle*3.14/180);
 r[1][1]=cos(angle*3.14/180);
 r[1][2]=0;
 r[2][0]=0;
 r[2][1]=0;
 r[2][2]=1;

int v1[3];
v1[0]=hexagon[1].get_x();
v1[1]=hexagon[1].get_y();
v1[2]=1;

int v2[3]={0, 0, 1};

int i, j, k;
for(k=1; k<8; k++)
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

v1[0]=v2[0];
v1[1]=v2[1];
hexagon[k].set_x(v2[0]);
hexagon[k].set_y(v2[1]);
}
for(k=1; k<8; k++)
{
hexagon[k].set_x(hexagon[k].get_x()+hexagon[0].get_x());
hexagon[k].set_y(hexagon[k].get_y()+hexagon[0].get_y());
}
for(k=1; k<7; k++)
{
Image1->Canvas->MoveTo(hexagon[k].get_x(),hexagon[k].get_y());
Image1->Canvas->LineTo(hexagon[k+1].get_x(),hexagon[k+1].get_y());
}
}

void rotandscale(TImage* Image1, double par, int sw, char a, char b, MyPoint& V)
{
double r[3][3];
// ����� ������� ��������������
 switch(sw)
 {
 case 0:
 r[0][0]=cos(par*3.14/180);
 r[0][1]=sin(par*3.14/180);
 r[0][2]=0;
 r[1][0]=-sin(par*3.14/180);
 r[1][1]=cos(par*3.14/180);
 r[1][2]=0;
 r[2][0]=0;
 r[2][1]=0;
 r[2][2]=1;
 break;
 case 1:
 r[0][0]=par;
 r[0][1]=0;
 r[0][2]=0;
 r[1][0]=0;
 r[1][1]=par;
 r[1][2]=0;
 r[2][0]=0;
 r[2][1]=0;
 r[2][2]=1;
 break;
 }
// �������������� ����� B
int v1[3]={V.get_x(),V.get_y(),1};
int v2[3]={0, 0, 1};
int i, j;
for (i = 0;i < 3;i++)
{
        double sum = 0;
        for (j = 0;j < 3;j++)
        {
                sum= sum+ (r[j][i] * v1[j]);
        }

        v2[i] = sum;
        if(v2[i]-sum>=0.5)
        {
        v2[i]++;
        }
}
V.set_x(v2[0]);
V.set_y(v2[1]);

//�������� �� ����� ����� �� �����
 if(B.get_x()<=0||B.get_y()<=0||A.get_x()<=0||A.get_y()<=0)
{
B.set_x();
B.set_y();
A.set_x();
A.set_y();
}

}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
doublr a_step=-10;
rotandscale(Image1, a_step, int sw, char a, char b, MyPoint& V)
}
//---------------------------------------------------------------------------

