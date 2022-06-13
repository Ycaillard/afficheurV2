//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "AfficheurGeant.h"

#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important : Les m�thodes et les propri�t�s des objets de la VCL peuvent seulement �tre
//   utilis�es dans une m�thode appel�e avec Synchronize, par exemple :
//
//      Synchronize(&UpdateCaption);
//
//   o� UpdateCaption pourrait ressembler � :
//
//      void __fastcall Taffiche::UpdateCaption()
//      {
//        Form1->Caption = "Mis � jour dans un thread";
//      }
//---------------------------------------------------------------------------

__fastcall Taffiche::Taffiche(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall Taffiche::Execute()
{
	//---- Placer le code du thread ici ----
  /*	i = 0;
	while(!Terminated)
	{
		i++;
		Synchronize(&UpdateCaption);
		Sleep(1000);   // Pause de 1s
	}
 */
 AfficheurGeant aff;
 while (!Terminated)     //cree la boucle du premier thread pour lancer la premier playlist
	{
	AfficheurGeant aff;

	   aff.ModifierImage("affichP.png");
	   aff.EnvoyerImageEtTexte();
	   Sleep(1000);


	   aff.ModifierImage("affichPUB.png");
	   aff.EnvoyerImageEtTexte();
	   Sleep(1000);


	   aff.ModifierImage("affichT.png");
	   aff.EnvoyerImageEtTexte();
	   Sleep(1000);

	   Synchronize(&UpdateCaption);

	}
   /*	Form1->ImageControl1->FImage     */
}
//---------------------------------------------------------------------------

void __fastcall Taffiche::UpdateCaption()
{

}
