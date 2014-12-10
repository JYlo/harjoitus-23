#include <iostream>
using namespace std;
#include "Määrittely.h"
void TulostaHenkilo(HENK x)
{
	cout << x.nimi << " " << x.matka << " " << x.hattu << endl;
}
void TulostaKaikkiHenkilot(HENK y[], int kerrat)
{
	int i;
	for (i = 0; i < kerrat; i++)
		TulostaHenkilo(y[i]);
}
void LisaaHenkilo(HENK henk[], int *kerrat)
{

	cout << "Anna henkilon nimi, koulumatka, hatunkoko\n";
	cin >> henk[*kerrat].nimi >> henk[*kerrat].matka >> henk[*kerrat].hattu;
	*kerrat = *kerrat + 1;
}
int Valikko(void)
{
	int valinta;
	cout << "VALIKKO" << endl
		<< "=======================" << endl
		<< "0 Lopeta" << endl
		<< "1 Lisaa henkilo" << endl
		<< "2 Nayta henkilo" << endl
		<< "3 Nayta kaikki henkilot" << endl
		<< "4 Poista henkilo" << endl
		<< "5 Tallenna tiedot tiedostoon" << endl
		<< "6 Hae tiedot tiedostosta";

	cout << "Anna valinta:\n";
	cin >> valinta;
	return valinta;
}