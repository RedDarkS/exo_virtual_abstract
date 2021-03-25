#include "Velo.h"

//Constructeur-Destructeur
Velo::Velo() 
{

}
Velo::Velo(string n, int nbr, int s, string c, bool v) : Vehicule(n, nbr, s, c)
{
	vtt = v;
}
Velo::~Velo() 
{

}

//GETTERS
bool Velo::getVtt() const 
{
	return vtt;
}

//SETTERS
void Velo::setVtt(bool v) 
{
	vtt = v;
}

//METHODES
void Velo::avancer(Vehicule& v) 
{
	cout << "Velo" << endl;
	cout << v.getName() << " avance vers un futur incertain." << endl;
}
ostream& operator<<(ostream& os, Velo const& v) 
{
	os << "----" << v.getName() << "----" << endl;
	os << "Vitesse : " << v.getSpeed() << endl;
	os << "Nombre de roue : " << v.getNbroue() << endl;
	os << "Couleur : " << v.getColor() << endl << endl;

	os << "VTT : " << v.getVtt() << endl;

	return os;
}