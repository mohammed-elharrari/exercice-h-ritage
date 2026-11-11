#pragma once
#include "Tableau.h"
class TableauBorne :
    public Tableau
{
private:
    double inf, sup;
public:
    TableauBorne(int, double, double);
    double& operator[](int)const;
    ~TableauBorne();
};

