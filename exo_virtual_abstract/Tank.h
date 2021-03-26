#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Vehicule.h"

using namespace std;

class Tank : public Vehicule
{
private:
    int nbmunition = 0;

public:
    //Constructeurs-Destructeurs
    Tank();
    Tank(string n, int nbr, int s, string c, int nbm);
    ~Tank();

    //GETTERS
    int getNbmunition() const;

    //SETTERS
    void setNbmunition(int nbm);

    //METHODES
    void avancer(Vehicule& v);
    void show();
    friend ostream& operator<<(ostream& os, Tank const& v);
};