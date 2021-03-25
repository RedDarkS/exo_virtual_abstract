#include "Tank.h"

//Constructeurs-Destructeurs
Tank::Tank()
{

}
Tank::Tank(string n, int nbr, int s, string c, int nbm) : Vehicule(n, nbr, s, c)
{
	nbmunition = nbm;
}
Tank::~Tank()
{

}

//GETTERS
int Tank::getNbmunition() const
{
	return nbmunition;
}

//SETTERS
void Tank::setNbmunition(int nbm)
{
	nbmunition = nbm;
}

//METHODES
void Tank::avancer(Vehicule& v)
{
	cout << "Tank" << endl;
	cout << v.getName() << " avance vers un futur incertain." << endl;
}
ostream& operator<<(ostream& os, Tank const& v)
{
	os << "----" << v.getName() << "----" << endl;
	os << "Vitesse : " << v.getSpeed() << endl;
	os << "Nombre de roue : " << v.getNbroue() << endl;
	os << "Couleur : " << v.getColor() << endl << endl;

	os << "Nombre de munition : " << v.getNbmunition() << endl;

	return os;
}