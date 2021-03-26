#include "Voiture.h"

Voiture::Voiture() 
{

}
Voiture::Voiture(string n, int nbr, int s, string c, int nbd) : Vehicule(n, nbr, s, c)
{
	nbdoor = nbd;
}
Voiture::~Voiture() 
{

}

//GETTERS
int Voiture::getNbdoor() const 
{
	return nbdoor;
}

//SETTERS
void Voiture::setnbdoor(int nbd) 
{
	nbdoor = nbd;
}

//Methodes
void Voiture::avancer(Vehicule& v) 
{
	cout << "Voiture" << endl;
	cout << v.getName() << " avance vers un futur incertain." << endl;
}
void Voiture::show() 
{
	cout << "----" << getName() << "----" << endl;
	cout << "Vitesse : " << getSpeed() << endl;
	cout << "Nombre de roue : " << getNbroue() << endl;
	cout << "Couleur : " << getColor() << endl;

	cout << "Nombre de portes : " << getNbdoor() << endl << endl;
}
ostream& operator<<(ostream& os, Voiture const& v) 
{
	os << "----" << v.getName() << "----" << endl;
	os << "Vitesse : " << v.getSpeed() << endl;
	os << "Nombre de roue : " << v.getNbroue() << endl;
	os << "Couleur : " << v.getColor() << endl << endl;

	os << "Nombre de portes : " << v.getNbdoor() << endl;

	return os;
}