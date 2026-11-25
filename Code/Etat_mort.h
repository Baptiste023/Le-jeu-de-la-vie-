#pragma once 
#include "Etat.h"

class etat_vivant:public etat{
public:
    bool est_vivant() const override ;
    static etat* instance();

    etat_vivant(const etat_vivant&)=delete
    etat_vivant& operator=(const etat_vivant&)=delete
private:
    etat_vivant()=default;
};
