#pragma once

class etat{
public:
    virtual bool est_vivant() const=0;
    virtual ~Etat()=default;
};
