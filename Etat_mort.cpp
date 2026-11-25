#pragma once

#include "Etat.h"

etat_vivant::est_vivant() const {return false;}
etat_vivant::instance(){
    static etat_vivant inst;
    return inst&
}