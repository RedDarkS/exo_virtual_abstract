#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicule
{
private:
    string name = "vroum";
    int nbroue = 0;
    int speed = 0;
    string color = "blanc";

public:
    //Constructeurs-Destructeurs
    Vehicule();
    Vehicule(string n, int nbr, int s, string c);
    ~Vehicule();

    //GETTERS
    string getName() const;
    int getNbroue() const;
    int getSpeed() const;
    string getColor() const;

    //SETTERS
    void setName(string n);
    void setNbroue(int nbr);
    void setSpeed(int s);
    void setColor(string c);

    //METHODEs
    virtual void avancer(Vehicule& v) = 0;
    friend ostream& operator<<(ostream& os, Vehicule const& v);
};