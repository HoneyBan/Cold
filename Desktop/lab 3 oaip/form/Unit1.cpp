//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include<conio.h>
#include<math.h>
#include <stdio.h>
#include <iomanip.h>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
  Memo1->Lines->Add("Laborotory Work 3") ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  double a,sum,y,h,b,z;
int k,n;
a=StrToFloat(Edit1->Text);
b=StrToFloat(Edit2->Text);
h=StrToFloat(Edit3->Text);
n=StrToFloat(Edit4->Text);
for (double x = a;x <= b;x += h){
sum=a=1;
for(k=1;k<=n;k++){
a *= -x * x / (2 * k) / (2 * k - 1);
sum=sum+a;
}
y = cos(x);
z = sum - y;
Memo1->Lines->Add("s(x)="+FloatToStrF(sum,ffFixed,8,6) + "y(x)="+FloatToStrF(y,ffFixed,8,6) +
"raznost="+FloatToStrF(z,ffFixed,8,6));}
}
//---------------------------------------------------------------------------
 