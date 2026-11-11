#include "TableauBorne.h"
#include <iostream>
using namespace std;
TableauBorne::TableauBorne(int n, double inf, double sup):Tableau(n)
{
	
	this->inf = inf;
	this->sup = sup;
	
	for (int i = 0;i <= this->taille;i++) {
		this->T[i] = this->inf;
	}
}

double& TableauBorne::operator[](int a) const
{
	if (a >= 0 && a <= this->taille) {
		return this->T[a];
	}
	
		exit(1);
}

TableauBorne::~TableauBorne()
{
}
