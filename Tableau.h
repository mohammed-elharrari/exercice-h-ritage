#pragma once
class Tableau
{
protected:
	int taille;
	double* T;
public:
	Tableau(int);
	Tableau(const Tableau&);
	Tableau operator=(const Tableau&);
	~Tableau();
private:
	double& operator[](int);
	
};

