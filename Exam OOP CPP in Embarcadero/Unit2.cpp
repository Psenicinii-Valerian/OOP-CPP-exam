//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{

	Application->Minimize();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
	Form1->Show();
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	ReleaseCapture();
	Perform(WM_SYSCOMMAND,0xF012,0);
}
//---------------------------------------------------------------------------





