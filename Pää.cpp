/*
*
,Harjoitus 22
*Jouni Yl�nen
*Kuvaus:
*Harjoitus 22 (Palautus vko 49)
*Tee ohjelma, joka toimii henkil�rekisterin� (max 10).
*Ohjelma antaa k�ytt�j�lle seuraavan valikon:
*
*VALIKKO
*0 Lopeta
*1 Lisaa henkilo
*2 Nayta kaikki henkilot
*
*Tallenna henkil�iden tiedot tietuetaulukkoon.
*Tallennettavia tietoja ovat
*etunimi (merkkijono)
*koulumatka (liukuluku)
*hatun koko (kokonaisluku)
*
*Toteuta ensin koko ohjelma p��ohjelmana.
*
*T�m�n j�lkeen lis�� seuraavat aliohjelmat:
*a) int Valikko(void);
*
*b) void TulostaHenkilo(TIEDOT );
*c) void TulostaKaikkiHenkilot(TIEDOT [], int lkm);
*d) void LisaaHenkilo(TIEDOT [], int *lkm);
*Versio 1.0
*26.11.2014
*/
#include <iostream>
using namespace std;
#include "M��rittely.h"
#include <cctype>
int Valikko(void);
void TulostaHenkilo(HENK x);
void TulostaKaikkiHenkilot(HENK y[], int kerrat);
void LisaaHenkilo(HENK[], int *kerrat);
void PoistaHenkilo(HENK y);
void main()
{
	HENK henk[10];
	int valinta;
	int kerrat = 0;
	while (1)
	{
		valinta = Valikko();
		if (valinta == 0)
		{
			break;
		}
		if (valinta == 1)
		{
			LisaaHenkilo(henk, &kerrat);
		}
		if (valinta == 2)
		{
			cout << "Henkilo:\n";
			TulostaHenkilo(henk[kerrat-1]);
	
		}
		if (valinta == 3)
		{
			TulostaKaikkiHenkilot(henk, kerrat-1);
		}
		if (valinta == 4)
		{
			int i = 0;
			while (i < 20)
			{
				henk[kerrat - 1].nimi[i] = NULL;
				i++;
			}
			henk[kerrat-1].matka = NULL;
			henk[kerrat-1].hattu = NULL;
			kerrat - 1;
		}
		if (valinta == 5)
		{

		}
		if (valinta == 6)
		{

		}
	}
}