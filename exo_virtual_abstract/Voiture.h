#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Vehicule.h"

using namespace std;

class Voiture : public Vehicule
{
private:
    int nbdoor = 0;

public:
    //Constreurs-Destructeurs
    Voiture();
    Voiture(string n, int nbr, int s, string c, int nbd);
    ~Voiture();

    //GETTERS
    int getNbdoor() const;

    //SETTERS
    void setnbdoor(int nbd);

    //METHODES
    void avancer(Vehicule& v);
    void show();
    friend ostream& operator<<(ostream& os, Voiture const& v);
};

