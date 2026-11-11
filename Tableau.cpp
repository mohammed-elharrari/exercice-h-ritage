#include "Tableau.h"
#include <iostream>
using namespace std;
Tableau::Tableau(int t)
{
	this->taille = t;
	this->T = new double[this->taille];
	for (int i = 0;i <= this->taille;i++) {
		this->T[i] = 0;
	}
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->T = new double[T.taille];
	for (int i = 0;i <= T.taille;i++) {
		this->T[i] =T.T[i];
	}
}

Tableau Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		this->taille = T.taille;
		this->T = new double[T.taille];
		for (int i = 0;i <= T.taille;i++) {
			this->T[i] = T.T[i];
		}
	}
	return *this;
}

double& Tableau::operator[](int a)
{
	
		if (a >=0 && a <= this->taille)
		return this->T[a];
}

Tableau::~Tableau()
{
	delete []T;
	
}
