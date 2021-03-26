#include <iostream>
#include <string>
#include <vector>

#include "Vehicule.h"
#include "Velo.h"
#include "Voiture.h"
#include "Tank.h"

using namespace std;

int main()
{
	vector <Vehicule*> garage;

	Velo velo("velo 1", 2, 15, "rouge", false);
	Velo vtt("velo 2", 2, 20, "bleu", true);

	Voiture zoe("Zoe", 4, 70, "vert", 5);

	Tank tiger("Tiger", 0, 50, "brun", 10);

	garage.push_back(&velo);
	garage.push_back(&vtt);
	garage.push_back(&zoe);
	garage.push_back(&tiger);

	for (int i = 0; i<garage.size(); i++) 
	{
		/*cout << *garage[i] <<endl;*/
		garage[i]->show();
	}

	return 0;
}