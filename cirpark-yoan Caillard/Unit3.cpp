//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit3.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important : Les m�thodes et les propri�t�s des objets de la VCL peuvent seulement �tre
//   utilis�es dans une m�thode appel�e avec Synchronize, par exemple :
//
//      Synchronize(&UpdateCaption);
//
//   o� UpdateCaption pourrait ressembler � :
//
//      void __fastcall TafficheStop::UpdateCaption()
//      {
//        Form1->Caption = "Mis � jour dans un thread";
//      }
//---------------------------------------------------------------------------

__fastcall TafficheStop::TafficheStop(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TafficheStop::Execute()
{
	//---- Placer le code du thread ici ----
}
//---------------------------------------------------------------------------
