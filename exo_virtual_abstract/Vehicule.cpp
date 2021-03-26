#include "Vehicule.h"

//Constructeurs-Destructeurs
Vehicule::Vehicule()
{

}
Vehicule::Vehicule(string n, int nbr, int s, string c) 
{
	name = n;
	nbroue = nbr;
	speed = s;
	color = c;
}
Vehicule::~Vehicule()
{

}

//GETTERS
string Vehicule::getName() const
{
	return name;
}
int Vehicule::getNbroue() const
{
	return nbroue;
}
int Vehicule::getSpeed() const
{
	return speed;
}
string Vehicule::getColor() const 
{
	return color;
}

//SETTERS
void Vehicule::setName(string n)
{
	name = n;
}
void Vehicule::setNbroue(int nbr)
{
	nbroue = nbr;
}
void Vehicule::setSpeed(int s)
{
	speed = s;
}
void Vehicule::setColor(string c)
{
	color = c;
}

//METHODES
void avancer(Vehicule& v)
{
	cout << v.getName() << " avance vers un futur incertain." << endl;
}
void Vehicule::show() 
{
	cout << "----" << getName() << "----" << endl;
	cout << "Vitesse : " << getSpeed() << endl;
	cout << "Nombre de roue : " << getNbroue() << endl;
	cout << "Couleur : " << getColor() << endl << endl;
}
ostream& operator<<(ostream& os, Vehicule const& v)
{
	os << "----" << v.getName() << "----" << endl;
	os << "Vitesse : " << v.getSpeed() << endl;
	os << "Nombre de roue : " << v.getNbroue() << endl;
	os << "Couleur : " << v.getColor() << endl << endl;

	return os;
}
