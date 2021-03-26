#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Vehicule.h"

using namespace std;

class Velo : public Vehicule
{
private:
    bool vtt = false;

public:
    //Constructeurs-Destructeurs
    Velo();
    Velo(string n, int nbr, int s, string c, bool v);
    ~Velo();

    //GETTERS
    bool getVtt() const;

    //SETTERS
    void setVtt(bool v);

    //METHODES
    void avancer(Vehicule& v);
    void show();
    friend ostream& operator<<(ostream& os, Velo const& v);
};